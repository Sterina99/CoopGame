// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "CGTrackerBot.generated.h"

class UCGHealthComponent;
class UMaterialInstanceDynamic;
class UParticleSystem;
UCLASS()
class COOPGAME_API ACGTrackerBot : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACGTrackerBot();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(VisibleDefaultsOnly,Category= "Components")
	UStaticMeshComponent* BaseMesh;
	UPROPERTY(VisibleDefaultsOnly, Category = "Components")
		UCGHealthComponent* HealthComp;

	UFUNCTION()
		void HandleTakeDamage(UCGHealthComponent* OwningHealthComp, float Health, float HealthDelta, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);

	FVector GetNextPathPoint();
	FVector NextPathPoint;
	UPROPERTY(EditAnywhere, Category = "TrackerBot")
	float RequiredDistanceToTarget;
	UPROPERTY(EditAnywhere, Category = "TrackerBot")
	bool bUseVelocityChange;
	UPROPERTY(EditAnywhere, Category = "TrackerBot")
	float SpeedForce;

	//Dynamic material to pulse on damage
	UMaterialInstanceDynamic* MatInst;

	void SelfDestruct();

	UPROPERTY(EditAnywhere, Category = "Explosion")
	UParticleSystem* ExplosionEffect;


	UPROPERTY(EditAnywhere, Category = "Explosion")
		float DamageRadius;
	UPROPERTY(EditAnywhere, Category = "Explosion")
		float ExplosionDamage;

	bool bIsExploded;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;



};
