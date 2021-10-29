// Fill out your copyright notice in the Description page of Project Settings.


#include "CGPowerUp.h"

// Sets default values
ACGPowerUp::ACGPowerUp()
{
	PowerUpInterval = 0.0f;
	TotalNrOfTicks = 0;

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


		GetWorldTimerManager().ClearTimer(TimerHandle_PowerUpTicks);
	}
}

void ACGPowerUp::ActivatePowerUp()
{
	if (PowerUpInterval >= 0.f) {

		GetWorldTimerManager().SetTimer(TimerHandle_PowerUpTicks, this, &ACGPowerUp::OnTickPowerUp, PowerUpInterval, true, 0.f);
	}
	else
	{
		OnTickPowerUp();
	}
}

