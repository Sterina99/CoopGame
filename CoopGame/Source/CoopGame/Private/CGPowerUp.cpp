// Fill out your copyright notice in the Description page of Project Settings.


#include "CGPowerUp.h"
#include "Net/UnrealNetwork.h"
// Sets default values
ACGPowerUp::ACGPowerUp()
{
	PowerUpInterval = 0.0f;
	TotalNrOfTicks = 0;
	SetReplicates(true);
	bIsPowerupActive = false;
}

// Called when the game starts or when spawned
void ACGPowerUp::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACGPowerUp::OnTickPowerUp()
{
	TicksProcessed++;

	OnPowerUpTicked();

	if (TicksProcessed >= TotalNrOfTicks) {

		OnExpired();
		bIsPowerupActive = false;
		//onRep functions do not get called on clients
		OnRep_PowerupActive();

		GetWorldTimerManager().ClearTimer(TimerHandle_PowerUpTicks);
	}
}

void ACGPowerUp::OnRep_PowerupActive()
{
	OnPowerupStateChanged(bIsPowerupActive);
	
}

void ACGPowerUp::ActivatePowerUp(AActor* ActivateFor)
{
	OnActivated(ActivateFor);
	bIsPowerupActive = true;
	//onRep functions do not get called on clients
	OnRep_PowerupActive();
	if (PowerUpInterval >= 0.f) {

		GetWorldTimerManager().SetTimer(TimerHandle_PowerUpTicks, this, &ACGPowerUp::OnTickPowerUp, PowerUpInterval, true);
	}
	else
	{
		OnTickPowerUp();
	}
}
void ACGPowerUp::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ACGPowerUp, bIsPowerupActive);

}
