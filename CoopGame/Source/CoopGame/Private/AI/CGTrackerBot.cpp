// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/CGTrackerBot.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "NavigationSystem.h"
#include "NavigationPath.h"


// Sets default values
ACGTrackerBot::ACGTrackerBot()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BaseMesh = CreateDefaultSubobject< UStaticMeshComponent>(TEXT("Base Mesh"));
	BaseMesh->SetCanEverAffectNavigation(false);
	BaseMesh->SetSimulatePhysics(true);
	RootComponent = BaseMesh;
	bUseVelocityChange = true;
	RequiredDistanceToTarget = 100.f;
	SpeedForce = 1000.f;
}

// Called when the game starts or when spawned
void ACGTrackerBot::BeginPlay()
{
	Super::BeginPlay();
	//Initial MoveTo
	FVector NextPoint = GetNextPathPoint();
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


