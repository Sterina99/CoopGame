// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CGGun.generated.h"

class USkeletalMeshComponent;
class UDamageType;
class UParticleSystem;

UCLASS()
class COOPGAME_API ACGGun : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACGGun();
	
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UFUNCTION(BlueprintCallable, Category = "Weapon")
	virtual void Fire();

	void PlayFireEffects(FVector TracerEndPoint) const;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
		USkeletalMeshComponent* BaseMesh;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category= "Weapon")
		TSubclassOf<UDamageType> DamageType;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category= "Weapon")
		float BaseDamage;
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category= "Weapon")
		float FireRate;
	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
	bool bCanPenetrate;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
		FName MuzzleSocketName;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
		FName TargetTracerName;


	UPROPERTY(EditDefaultsOnly, Category = "Camera")
		TSubclassOf<UCameraShakeBase> FireCamShake;


	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "FX")
		UParticleSystem* MuzzleEffect;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "FX")
		UParticleSystem* DefaulImpactEffect;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "FX")
		UParticleSystem* FleshImpactEffect;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "FX")
		UParticleSystem* TracerEffect;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
		int MaxAmmos;

	float TimeBetweenShots;
	float LastFireTime;

	FTimerHandle TimerHandle_WeaponFire;


public:	
	// Called every frame
//	virtual void Tick(float DeltaTime) override;
	void StartFire();

	void StopFire();
	UFUNCTION(BlueprintPure)
		int GetAmmos() const;
	int Ammos;
	void ReloadWeapon();
};
