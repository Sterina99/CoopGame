// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CGCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;
class ACGGun;
class UWidgetComponent;
class UCGHealthComponent;
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
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UCGHealthComponent* HealthComp;

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



	void BeginZoom();
	void EndZoom();

	void ReloadWeapon();
	void StopReloadWeapon();
	
	UFUNCTION()
	void OnHealthChanged(UCGHealthComponent* OwningHealthComp, float Health, float HealthDelta, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);

	UPROPERTY(Replicated)
	ACGGun* CurrentWeapon;
	FTimerHandle TimerHandle_Reload;
	
	float DefaultFOV;
	bool bIsZooming;
	bool bIsReloading;
	UPROPERTY(Replicated,BlueprintReadOnly, Category = "Player")
	  bool bIsDead;
	int Magazines;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual FVector GetPawnViewLocation() const override;
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void AddMagazine();
	UFUNCTION(BlueprintCallable)
		ACGGun* GetCurrentWeapon();
	UFUNCTION(BlueprintCallable)
		FName GetCurrentWeaponName();
	UFUNCTION(BlueprintCallable)
		int GetAmmos();
	UFUNCTION(BlueprintCallable)
		int GetMagazines();
	UFUNCTION(BlueprintCallable)
		bool IsReloading();
	UFUNCTION(BlueprintCallable)
		bool IsZooming();
	UFUNCTION(BlueprintCallable, Category="Player")
		void StartFire();
	UFUNCTION(BlueprintCallable, Category= "Player")
		void StopFire();
	virtual void GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const;
};
