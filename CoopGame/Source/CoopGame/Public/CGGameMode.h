// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"

#include "CGGameMode.generated.h"

enum class EWaveState : uint8;


DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnActorKilled, AActor*, VictimActor, AActor*, KillerActor, AController*, KillerController);


/**
 * 
 */
UCLASS()
class COOPGAME_API ACGGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
protected:
	FTimerHandle TimerHandle_BotSpawner;
	FTimerHandle TimerHandle_NextWaveStart;

	//refeering to one wave
	int32 NrOfBotsToSpawn;

	int32 WaveCount;
	UPROPERTY(EditDefaultsOnly,Category="GameMode")
	float TimeBetweenWaves;
	//spawn one bot
	UFUNCTION(BlueprintImplementableEvent,Category= "GameMode")
	void SpawnNewBot();

	//manages the spawning
	void SpawnBotTimerElapsed();
	//StartSpawning
	void StartWave();
	//StopSpawning
	void EndWave();
	//Set timer for next wave
	void PrepareForNextWave();

	void GameOver();
	void CheckWaveState();

	void CheckAnyPlayerAlive();

	void SetWaveState(EWaveState NewState);
	void RespawnDeadPlayers();
public:
	virtual void StartPlay() override;
	ACGGameMode();

	virtual void Tick(float DeltaSeconds) override;

	UPROPERTY(BlueprintAssignable, Category= "GameMode")
		FOnActorKilled OnActorKilled;
};
