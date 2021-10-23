// Fill out your copyright notice in the Description page of Project Settings.


#include "CGCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/PawnMovementComponent.h"
#include "CGGun.h"
#include "Components/WidgetComponent.h"


// Sets default values
ACGCharacter::ACGCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm Comp"));
	SpringArmComp->SetupAttachment(RootComponent);

	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera Comp"));
	CameraComp->bUsePawnControlRotation = true;
	CameraComp->SetupAttachment(SpringArmComp);

	
}

// Called when the game starts or when spawned
void ACGCharacter::BeginPlay()
{
	Super::BeginPlay();
	WeaponSocketName = "WeaponSocket";
	GetMovementComponent()->GetNavAgentPropertiesRef().bCanCrouch = true;
	DefaultFOV = CameraComp->FieldOfView;
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	CurrentWeapon = GetWorld()->SpawnActor<ACGGun>(DefaultWeaponClass, FVector::ZeroVector,FRotator::ZeroRotator, SpawnParams);
	if (CurrentWeapon) {
		CurrentWeapon->SetOwner(this);
		CurrentWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale,WeaponSocketName);
	}
	bIsReloading = false;
	Magazines = 0;
}

void ACGCharacter::BeginZoom()
{
	bIsZooming = true;
}

void ACGCharacter::EndZoom()
{
	bIsZooming = false;

}
void ACGCharacter::AddMagazine() {

	Magazines++;
}
void ACGCharacter::ReloadWeapon()
{
	if (Magazines <= 0) return;

	UE_LOG(LogTemp, Warning, TEXT("Reload"));
	bIsReloading = true;
	GetWorldTimerManager().SetTimer(TimerHandle_Reload,this,&ACGCharacter::StopReloadWeapon,2.17f,false);
}

void ACGCharacter::StopReloadWeapon()
{
	bIsReloading = false;
	Magazines--;
	UE_LOG(LogTemp, Warning, TEXT("DoneReload"));
	CurrentWeapon->ReloadWeapon();
}

// Called every frame
void ACGCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	float TargetFOV = bIsZooming ? ZoomedFOV : DefaultFOV;
	CameraComp->FieldOfView = FMath::FInterpTo(CameraComp->FieldOfView, TargetFOV, DeltaTime, ZoomInterpSpeed);
}

FVector ACGCharacter::GetPawnViewLocation() const
{	
	if (CameraComp) {
		return CameraComp->GetComponentLocation();
	}
	return Super::GetPawnViewLocation();
}

// Called to bind functionality to input
void ACGCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Forward",this,&ACGCharacter::MoveForward);
	PlayerInputComponent->BindAxis("Right",this,&ACGCharacter::MoveRight);
	PlayerInputComponent->BindAxis("LookUp", this, &ACGCharacter::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookRight", this, &ACGCharacter::AddControllerYawInput);
	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &ACGCharacter::BeginCrouch);
	PlayerInputComponent->BindAction("Crouch", IE_Released, this, &ACGCharacter::EndCrouch);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACGCharacter::Jump);
	PlayerInputComponent->BindAction("Zoom", IE_Pressed, this, &ACGCharacter::BeginZoom);
	PlayerInputComponent->BindAction("Zoom", IE_Released, this, &ACGCharacter::EndZoom);
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &ACGCharacter::StartFire);
	PlayerInputComponent->BindAction("Fire", IE_Released, this, &ACGCharacter::StopFire);
	PlayerInputComponent->BindAction("Reload", IE_Pressed, this, &ACGCharacter::ReloadWeapon);

}

ACGGun* ACGCharacter::GetCurrentWeapon()
{
	return CurrentWeapon;
}
FName ACGCharacter::GetCurrentWeaponName()
{
	return CurrentWeapon->GetFName();
}
//BluePrintFunctions
bool ACGCharacter::IsReloading()
{
	return bIsReloading;
}
bool ACGCharacter::IsZooming()
{
	return bIsZooming;
}
int ACGCharacter::GetAmmos()
{
	return CurrentWeapon->Ammos;
}

int ACGCharacter::GetMagazines()
{
	return Magazines;
}





void ACGCharacter::MoveForward(float Value)
{
	//if(!bIsReloading)
	AddMovementInput(GetActorForwardVector()* Value);
}

void ACGCharacter::MoveRight(float Value)
{
	//if (!bIsReloading)
	AddMovementInput(GetActorRightVector() * Value);
}

void ACGCharacter::BeginCrouch()
{
	//UE_LOG(LogTemp, Warning, TEXT("Crouching"));
	Crouch();
}

void ACGCharacter::EndCrouch()
{
	UnCrouch();
}

void ACGCharacter::StartFire()
{
	if (CurrentWeapon && !bIsReloading) {
		CurrentWeapon->StartFire();
	}
}
void ACGCharacter::StopFire()
{
	if (CurrentWeapon) {
		CurrentWeapon->StopFire();
	}
}





