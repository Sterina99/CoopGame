// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "CGGameState.generated.h"

UENUM(BlueprintType) 
enum class EWaveState :  uint8
{
	WaitingToStart,
	
	WaveInprogess,
	//no more bots to spawn, waiting for player to kill all
	WaitingToComplete,

	WaveComplete,

	GameOver,
};

/**
 * 
 */
UCLASS()
class COOPGAME_API ACGGameState : public AGameStateBase
{
	GENERATED_BODY()

protected:
	UFUNCTION()
		void OnRep_WaveState(EWaveState OldState);

	UFUNCTION(BlueprintImplementableEvent, Category = "GameState")
		void WaveStateChanged(EWaveState NewState, EWaveState OldState);
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_WaveState, Category = "GameState")
		EWaveState WaveState;
public:
	
	void SetWaveState(EWaveState NewState);
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const;

};
