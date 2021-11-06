// Fill out your copyright notice in the Description page of Project Settings.


#include "CGGameMode.h"
#include "TimerManager.h"
#include "Components\CGHealthComponent.h"
#include "CGPlayerState.h"
#include "CGPlayerController.h"
#include "CGGameState.h"
ACGGameMode::ACGGameMode()
{
	TimeBetweenWaves = 2.f;
	PlayerStateClass = ACGPlayerState::StaticClass();
	GameStateClass = ACGGameState::StaticClass();
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.TickInterval = 1.f;
}

void ACGGameMode::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	CheckWaveState();
	CheckAnyPlayerAlive();
}

void ACGGameMode::SpawnBotTimerElapsed()
{
	SpawnNewBot();
	NrOfBotsToSpawn--;

	if (NrOfBotsToSpawn <= 0) {
		EndWave();
	}
}
void ACGGameMode::StartWave()
{
	WaveCount++;
	NrOfBotsToSpawn = 2 * WaveCount;
	GetWorldTimerManager().SetTimer(TimerHandle_BotSpawner, this, &ACGGameMode::SpawnBotTimerElapsed, 1.0f, true, 0.0f);
	SetWaveState(EWaveState::WaveInprogess);
}

void ACGGameMode::EndWave()
{
	GetWorldTimerManager().ClearTimer(TimerHandle_BotSpawner);
	SetWaveState(EWaveState::WaitingToComplete);

}

void ACGGameMode::PrepareForNextWave()
{
	RespawnDeadPlayers();
	GetWorldTimerManager().SetTimer(TimerHandle_NextWaveStart, this, &ACGGameMode::StartWave, TimeBetweenWaves, false);
	SetWaveState(EWaveState::WaitingToStart);
	

}

void ACGGameMode::GameOver()
{
	UE_LOG(LogTemp, Log, TEXT("GAMEOVER"));
	SetWaveState(EWaveState::GameOver);

}

void ACGGameMode::CheckWaveState()
{
	bool bIsPreparingForNextWave = GetWorldTimerManager().IsTimerActive(TimerHandle_NextWaveStart);

	if (NrOfBotsToSpawn > 0 || bIsPreparingForNextWave) {
		return;
	}

	bool bIsAnyBotAlive = false;

	for (FConstPawnIterator It = GetWorld()->GetPawnIterator(); It; It++) {

		APawn* TestPawn = It->Get();

		if (TestPawn == nullptr || TestPawn->IsPlayerControlled()) {
			continue;

		}
		UCGHealthComponent* HealthComp = Cast<UCGHealthComponent>( TestPawn->GetComponentByClass( UCGHealthComponent::StaticClass() ) );
		if (HealthComp && HealthComp->GetHealth()>0) {
			bIsAnyBotAlive = true;
			break;
		}
	}

	if (!bIsAnyBotAlive) {
		SetWaveState(EWaveState::WaveComplete);

		PrepareForNextWave();
	}
}

void ACGGameMode::CheckAnyPlayerAlive()
{

	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; It++) {
		APlayerController* PC = It->Get();
		if (PC) {
			APawn* MyPawn= PC->GetPawn();
			if (MyPawn) {

				UCGHealthComponent* HealthComp= Cast<UCGHealthComponent>(MyPawn->GetComponentByClass(UCGHealthComponent::StaticClass()));
				if (ensure(HealthComp)) {	
					//I have a player alive
					return;
				}
			
			} 
		}
	}
	//if no player alive

	GameOver();
}

void ACGGameMode::SetWaveState(EWaveState NewState)
{
	ACGGameState* GS = GetGameState<ACGGameState>();
	if (ensureAlways(GS)) {
		GS->SetWaveState(NewState);
	}
}

void ACGGameMode::RespawnDeadPlayers()
{

	for (FConstControllerIterator It = GetWorld()->GetControllerIterator(); It; It++) {
		ACGPlayerController* PC = Cast<ACGPlayerController>( It->Get());
		if (PC && PC->GetPawn() == nullptr) {
			RestartPlayer(PC);
		}
	}
}

void ACGGameMode::StartPlay()
{
	Super::StartPlay();
	PrepareForNextWave();
}
