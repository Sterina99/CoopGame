// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CGPowerUp.generated.h"

UCLASS()
class COOPGAME_API ACGPowerUp : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACGPowerUp();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	//Time between powerup ticks
	UPROPERTY(EditDefaultsOnly, Category = "PowerUp")
		float PowerUpInterval;

	//Total Times we apply the powerup effect
	UPROPERTY(EditDefaultsOnly, Category = "PowerUp")
		int32 TotalNrOfTicks;

	FTimerHandle TimerHandle_PowerUpTicks;

	int32 TicksProcessed;
	UFUNCTION()
		void OnTickPowerUp();
	
	UPROPERTY(ReplicatedUsing = OnRep_PowerupActive)
		bool bIsPowerupActive;

	UFUNCTION()
	void OnRep_PowerupActive();
	UFUNCTION(BlueprintImplementableEvent, Category = "PowerUp")
	void OnPowerupStateChanged(bool bNewIsActive);
public:	
	
	void ActivatePowerUp(AActor* ActivateFor);
	virtual void GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const;

	UFUNCTION(BlueprintImplementableEvent, Category = "PowerUp")
		void OnActivated(AActor* ActivateFor);
	UFUNCTION(BlueprintImplementableEvent, Category = "PowerUp")
		void OnPowerUpTicked();
	UFUNCTION(BlueprintImplementableEvent, Category = "PowerUp")
		void OnExpired();
};
