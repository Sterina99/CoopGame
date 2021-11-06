// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "CGPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class COOPGAME_API ACGPlayerState : public APlayerState
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category= "Player State")
	void AddScore(float ScoreDelta);
};
