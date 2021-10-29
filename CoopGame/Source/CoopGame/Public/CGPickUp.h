// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CGPickUp.generated.h"

class USphereComponent;
class UDecalComponent;

UCLASS()
class COOPGAME_API ACGPickUp : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACGPickUp();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category= "Components")
	USphereComponent* SphereComp;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UDecalComponent* DecalComp;

public:	

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
};
