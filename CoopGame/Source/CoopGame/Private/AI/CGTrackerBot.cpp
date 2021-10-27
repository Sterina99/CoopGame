// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/CGTrackerBot.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "NavigationSystem.h"
#include "NavigationPath.h"
#include "Components/CGHealthComponent.h"
#include "DrawDebugHelpers.h"
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
	bUseVelocityChange = true;
	RequiredDistanceToTarget = 100.f;
	SpeedForce = 1000.f;
	bIsExploded = false;
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
	ACharacter* PlayerPawn = UGameplayStatics::GetPlayerCharacter(this,0);

	if (PlayerPawn) {
		UNavigationPath* NavPath=	UNavigationSystemV1::FindPathToActorSynchronously(this, GetActorLocation(), PlayerPawn);
		UE_LOG(LogTemp, Warning, TEXT("Tracking"));
		if (NavPath->PathPoints.Num() > 1) {
			UE_LOG(LogTemp, Warning, TEXT("found u"));

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

	UGameplayStatics::SpawnEmitterAtLocation(this, ExplosionEffect, GetActorLocation());

	TArray<AActor*> IgnoredActors;
	IgnoredActors.Add(this);

	UGameplayStatics::ApplyRadialDamage(this, ExplosionDamage, GetActorLocation(), DamageRadius, nullptr, IgnoredActors, this, GetInstigatorController(), true);
	DrawDebugSphere(GetWorld(), GetActorLocation(), DamageRadius, 12, FColor::Yellow, false, 5.f);

	Destroy();
}

// Called every frame
void ACGTrackerBot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector DistanceToTarget = GetActorLocation() - NextPathPoint;
	//Keeplooking for new position to moveTo

	if (DistanceToTarget.Size()<RequiredDistanceToTarget){

		NextPathPoint = GetNextPathPoint();
		
	}
	else {
		FVector ForceDirection = NextPathPoint - GetActorLocation();
		ForceDirection.Normalize();
		ForceDirection *= SpeedForce;
		BaseMesh->AddForce(ForceDirection, NAME_None, bUseVelocityChange);
	}
}


