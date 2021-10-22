// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CGAmmoPickUp.generated.h"

class USphereComponent;

UCLASS()
class COOPGAME_API ACGAmmoPickUp : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACGAmmoPickUp();
	UFUNCTION(BlueprintCallable)
	void PickUp(UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(EditDefaultsOnly, Category = "Ammo")
		USphereComponent* SphereComp;
		
	// Called every frame
//	virtual void Tick(float DeltaTime) override;

};
