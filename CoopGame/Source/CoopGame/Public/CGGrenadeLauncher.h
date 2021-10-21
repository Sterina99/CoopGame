// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CGGun.h"
#include "CGGrenadeLauncher.generated.h"

/**
 * 
 */
UCLASS()
class COOPGAME_API ACGGrenadeLauncher : public ACGGun
{
	GENERATED_BODY()
public:
	// Sets default values for this actor's properties
	ACGGrenadeLauncher();
protected:
	
	virtual void Fire() override;

	UPROPERTY(EditDefaultsonly, BlueprintReadOnly, Category = "Weapon")
		TSubclassOf<class ACGGrenadeProjectile> ProjectileClass;
};
