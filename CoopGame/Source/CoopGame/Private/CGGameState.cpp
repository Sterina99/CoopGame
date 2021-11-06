// Fill out your copyright notice in the Description page of Project Settings.


#include "CGGameState.h"
#include "Net/UnrealNetwork.h"
void ACGGameState::OnRep_WaveState(EWaveState OldState) {

	WaveStateChanged(WaveState, OldState);
}

void ACGGameState::SetWaveState(EWaveState NewState)
{
	if (GetLocalRole() == ROLE_Authority) {
		EWaveState OldState = WaveState;

		WaveState = NewState;

		//call on server because line 16 does not trigger the replication on the server, just the clients
		OnRep_WaveState(OldState);
	}
}

void ACGGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ACGGameState,WaveState );
}