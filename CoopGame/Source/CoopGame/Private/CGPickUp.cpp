// Fill out your copyright notice in the Description page of Project Settings.


#include "CGPickUp.h"
#include "Components/SphereComponent.h"
#include "Components/DecalComponent.h"
#include "CGPowerUp.h"
// Sets default values
ACGPickUp::ACGPickUp()
{
	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Comp"));
	SphereComp->SetSphereRadius(75.f);
	RootComponent = SphereComp;

	DecalComp = CreateDefaultSubobject<UDecalComponent>(TEXT("Decal Comp"));

	DecalComp->SetupAttachment(RootComponent);
	DecalComp->DecalSize = FVector(45.f, 75.f, 75.f);
	
	CooldownDuration = 10.f;
	SetReplicates(true);
}

// Called when the game starts or when spawned
void ACGPickUp::BeginPlay()
{
	Super::BeginPlay();

	if(GetLocalRole()== ROLE_Authority)
	Respawn();
	
}

void ACGPickUp::Respawn()
{
	if (PowerupClass == nullptr) {

		UE_LOG(LogTemp, Warning, TEXT("Powerup class not initialized yet in %s"), *GetName());
		return;
	}
	FActorSpawnParameters SpawnParams;

	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	PowerUpInstance = GetWorld()->SpawnActor<ACGPowerUp>(PowerupClass,GetTransform(),SpawnParams);
}

void ACGPickUp::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	if (GetLocalRole()== ROLE_Authority && PowerUpInstance) {
		PowerUpInstance->ActivatePowerUp(OtherActor);
		PowerUpInstance = nullptr;

		GetWorldTimerManager().SetTimer(TimerHandle_PowerUp, this, &ACGPickUp::Respawn, CooldownDuration, false);
	}
}



