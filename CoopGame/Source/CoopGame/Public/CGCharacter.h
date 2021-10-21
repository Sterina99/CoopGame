// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CGCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;
class ACGGun;
UCLASS()
class COOPGAME_API ACGCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACGCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UCameraComponent* CameraComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USpringArmComponent* SpringArmComp;
	UPROPERTY(EditDefaultsOnly, Category = "Camera")
		float ZoomInterpSpeed;
	UPROPERTY(EditDefaultsOnly,Category = "Camera")
	float ZoomedFOV;

	UPROPERTY(VisibleDefaultsonly, Category = "Weapon")
		FName WeaponSocketName;
	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
		TSubclassOf<ACGGun> DefaultWeaponClass;

	void MoveForward(float Value);
	void MoveRight(float Value);

	void BeginCrouch();
	void EndCrouch();

	void StartFire();
	void StopFire();

	void BeginZoom();
	void EndZoom();

	ACGGun* CurrentWeapon;
	
	
	float DefaultFOV;
	bool bIsZooming;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual FVector GetPawnViewLocation() const override;
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
