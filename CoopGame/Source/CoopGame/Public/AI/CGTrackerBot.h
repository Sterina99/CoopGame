// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "CGTrackerBot.generated.h"

class UCGHealthComponent;
class UMaterialInstanceDynamic;
class UParticleSystem;
class USphereComponent;
class USoundCue;
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
	UPROPERTY(VisibleDefaultsOnly, Category = "Components")
		USphereComponent* SphereComp;

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

	UPROPERTY(EditAnywhere, Category = "TrackerBot")
	UParticleSystem* ExplosionEffect;


	UPROPERTY(EditAnywhere, Category = "TrackerBot")
		float DamageRadius;
	UPROPERTY(EditAnywhere, Category = "TrackerBot")
		float ExplosionDamage;

	UPROPERTY(EditAnywhere, Category = "TrackerBot")
	USoundCue* SelfDestructionSound;
	UPROPERTY(EditAnywhere, Category = "TrackerBot")
	USoundCue* ExplosionSound;

	bool bIsExploded;
	bool bStartedSelfDestruction;


	//TO self destruct
	void DamageSelf();

	FTimerHandle TimerHandle_DamageSelf;

	FTimerHandle TimerHandle_RefreshPath;
	//
	void RefreshPath();
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

};
