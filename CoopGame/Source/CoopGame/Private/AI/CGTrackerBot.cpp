// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/CGTrackerBot.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "NavigationSystem.h"
#include "NavigationPath.h"
#include "Components/CGHealthComponent.h"
#include "Components/SphereComponent.h"
#include "DrawDebugHelpers.h"
#include "CGCharacter.h"
#include "Sound/SoundCue.h"
// Sets default values
ACGTrackerBot::ACGTrackerBot()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BaseMesh = CreateDefaultSubobject< UStaticMeshComponent>(TEXT("Base Mesh"));
	BaseMesh->SetCanEverAffectNavigation(false);
	BaseMesh->SetSimulatePhysics(true);
	RootComponent = BaseMesh;

	HealthComp = CreateDefaultSubobject<UCGHealthComponent>(TEXT("Health Comp"));
	HealthComp->OnHealthChanged.AddDynamic(this, &ACGTrackerBot::HandleTakeDamage);

	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Comp"));
	SphereComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	SphereComp->SetCollisionResponseToAllChannels(ECR_Ignore);
	SphereComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	SphereComp->SetSphereRadius(200.f);
	SphereComp->SetupAttachment(RootComponent);

	bUseVelocityChange = true;
	RequiredDistanceToTarget = 100.f;
	SpeedForce = 1000.f;
	ExplosionDamage = 60.f;
	DamageRadius = 350.f;
	bIsExploded = false;
	bStartedSelfDestruction = false;
}

// Called when the game starts or when spawned
void ACGTrackerBot::BeginPlay()
{
	Super::BeginPlay();
	//Initial MoveTo
	FVector NextPoint = GetNextPathPoint();
}


void ACGTrackerBot::HandleTakeDamage(UCGHealthComponent* OwningHealthComp, float Health, float HealthDelta, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	//explode on HP==0;
	//TODO Pulse materila on hit
	if (MatInst == nullptr) {
		MatInst = BaseMesh->CreateAndSetMaterialInstanceDynamicFromMaterial(0, BaseMesh->GetMaterial(0));
	}

	if (MatInst)
	{
		MatInst->SetScalarParameterValue("LastTimeDamageTaken", GetWorld()->TimeSeconds);
	}
	UE_LOG(LogTemp, Log, TEXT("Health %s of %s"), *FString::SanitizeFloat(Health), *GetName());
	if (Health <= 0) {
		SelfDestruct();
	}
}

FVector ACGTrackerBot::GetNextPathPoint()
{
	if (GetLocalRole() != ROLE_Authority) return FVector::ZeroVector;
	//only run this on serve

	AActor* BestTarget=nullptr;
	float  NearestTargetDistance = FLT_MAX;
	//only run this on server
	for (FConstPawnIterator It = GetWorld()->GetPawnIterator(); It; It++) {

		APawn* TestPawn = It->Get();

		if (TestPawn == nullptr /* || !TestPawn->IsPlayerControlled() */ || UCGHealthComponent::IsFriendly(TestPawn, this)) {
			continue;

		}
		UCGHealthComponent* TestPawnHealthComp = Cast<UCGHealthComponent>(TestPawn->GetComponentByClass(UCGHealthComponent::StaticClass()));
		if (TestPawnHealthComp && TestPawnHealthComp->GetHealth() > 0.0f) {
			float Distance = (TestPawn->GetActorLocation() - GetActorLocation()).Size();
			if (NearestTargetDistance > Distance) {
				BestTarget = TestPawn;
				NearestTargetDistance = Distance;
			}
		}
	}
	if (BestTarget) {

		UNavigationPath* NavPath=	UNavigationSystemV1::FindPathToActorSynchronously(this, GetActorLocation(), BestTarget);

		GetWorldTimerManager().ClearTimer(TimerHandle_RefreshPath);
		GetWorldTimerManager().SetTimer(TimerHandle_RefreshPath, this, &ACGTrackerBot::RefreshPath, 5.0f, false);
		//UE_LOG(LogTemp, Warning, TEXT("Tracking"));

		if (NavPath && NavPath->PathPoints.Num() > 1) {
		//	UE_LOG(LogTemp, Warning, TEXT("found u"));

			return NavPath->PathPoints[1];
		}
	}
	return GetActorLocation();
}

void ACGTrackerBot::SelfDestruct()
{
	if (bIsExploded){
		return;
	}

	bIsExploded = true;

	//Only visual/sound effect runs on both client and server (this case...when playing using dedicated servers, only clients uses effects)
	UGameplayStatics::SpawnEmitterAtLocation(this, ExplosionEffect, GetActorLocation());
	UGameplayStatics::SpawnSoundAtLocation(this, ExplosionSound, GetActorLocation());
	BaseMesh->SetVisibility(false, true);
	BaseMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);


	if (GetLocalRole() == ROLE_Authority) {

		TArray<AActor*> IgnoredActors;
		IgnoredActors.Add(this);

		UGameplayStatics::ApplyRadialDamage(this, ExplosionDamage, GetActorLocation(), DamageRadius, nullptr, IgnoredActors, this, GetInstigatorController(), true);
		DrawDebugSphere(GetWorld(), GetActorLocation(), DamageRadius, 12, FColor::Yellow, false, 5.f);

		SetLifeSpan(1.f);
	}
}

void ACGTrackerBot::DamageSelf()
{
	UGameplayStatics::ApplyDamage(this, 20.f, GetInstigatorController(), this, nullptr);
}

void ACGTrackerBot::RefreshPath()
{
	NextPathPoint = GetNextPathPoint();
}

// Called every frame
void ACGTrackerBot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (GetLocalRole() != ROLE_Authority) return;
	//Only run this on Server// 


	FVector DistanceToTarget = GetActorLocation() - NextPathPoint;
	//Keeplooking for new position to moveTo

	if (DistanceToTarget.Size()<RequiredDistanceToTarget && !bIsExploded){

		NextPathPoint = GetNextPathPoint();
		
	}
	else {
		FVector ForceDirection = NextPathPoint - GetActorLocation();
		ForceDirection.Normalize();
		ForceDirection *= SpeedForce;
		BaseMesh->AddForce(ForceDirection, NAME_None, bUseVelocityChange);
	}
	//Up till here
}

void ACGTrackerBot::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	if (!bStartedSelfDestruction) {

	ACGCharacter* PlayerPawn = Cast<ACGCharacter>(OtherActor);
		if (PlayerPawn && !bIsExploded && !UCGHealthComponent::IsFriendly(OtherActor,this)) {

			if (GetLocalRole() == ROLE_Authority) {

				GetWorldTimerManager().SetTimer(TimerHandle_DamageSelf,this,&ACGTrackerBot::DamageSelf,0.5f,true,0.0f);
			}

			bStartedSelfDestruction = true;

			UGameplayStatics::SpawnSoundAttached(SelfDestructionSound,RootComponent);
		}
	}
}


