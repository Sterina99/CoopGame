// Fill out your copyright notice in the Description page of Project Settings.


#include "CGGun.h"
#include "Components/SkeletalMeshComponent.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Particles\ParticleSystem.h"
#include "Particles/ParticleSystemComponent.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "CoopGame/CoopGame.h"
#include "Net/UnrealNetwork.h"
// Sets default values
ACGGun::ACGGun()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
//	PrimaryActorTick.bCanEverTick = true;
	BaseMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BaseMesh"));
	RootComponent = BaseMesh;

	SetReplicates(true);
}

// Called when the game starts or when spawned
void ACGGun::BeginPlay()
{
	Super::BeginPlay();
	MuzzleSocketName = "MuzzleSocket";
	TargetTracerName = "Target";
	TimeBetweenShots = 60 / FireRate;
	Ammos = MaxAmmos;
	NetUpdateFrequency = 66.f;
	MinNetUpdateFrequency = 33.f;
}

void ACGGun::Fire()
{
	if (GetLocalRole() < ROLE_Authority)
	{
		ServerFire();

	}
	if (Ammos <= 0) return;
	AActor* MyOwner = GetOwner();

	if (MyOwner)
	{
		Ammos--;
		FVector EyeLocation;
		FRotator EyeRotation;
		MyOwner->GetActorEyesViewPoint(EyeLocation, EyeRotation);

		FVector ShotDirection = EyeRotation.Vector();
		float HalfRad = FMath::DegreesToRadians(BulletSpread);
		ShotDirection= FMath::VRandCone(ShotDirection, HalfRad, HalfRad);

		FVector TraceEnd = EyeLocation + (ShotDirection * 10000);
		FCollisionQueryParams QueryParams;
		QueryParams.AddIgnoredActor(MyOwner);
		QueryParams.AddIgnoredActor(this);
		QueryParams.bReturnPhysicalMaterial = true;

		//more cost, but more efficient :D
		QueryParams.bTraceComplex = true;

		//Particle "Target" paramenter
		FVector TracerEndPoint = TraceEnd;
		EPhysicalSurface SurfaceType = SurfaceType_Default;
		if (!bCanPenetrate) {

			FHitResult Hit;
			if(GetWorld()->LineTraceSingleByChannel(Hit, EyeLocation, TraceEnd, COLLISION_WEAPON, QueryParams)){

				//proccess damage
				AActor* HitActor = Hit.GetActor();
			
				TracerEndPoint = Hit.ImpactPoint;
				float ActualDamage = BaseDamage;
				 SurfaceType = UPhysicalMaterial::DetermineSurfaceType(Hit.PhysMaterial.Get());
				if (SurfaceType == SURFACE_FLESHVULNERABLE) 	ActualDamage *= 4.f;
				UGameplayStatics::ApplyPointDamage(HitActor, ActualDamage, ShotDirection, Hit, MyOwner->GetInstigatorController(), MyOwner, DamageType);
				PlayImpactEffects(SurfaceType, Hit.ImpactPoint);
				TracerEndPoint = Hit.ImpactPoint;
				
			}

		//	DrawDebugLine(GetWorld(), EyeLocation, TraceEnd, FColor::White, false, 1.f, 0, 1.f);
			PlayFireEffects(TracerEndPoint);
		}
		else {
			TArray<FHitResult> OutHits;
			if (GetWorld()->LineTraceMultiByChannel(OutHits, EyeLocation, TraceEnd, COLLISION_FMJWEAPON, QueryParams)) {
				UE_LOG(LogTemp, Warning, TEXT("%i"), OutHits.Num());
				for (FHitResult Hit : OutHits) {

				//proccess damage
				AActor* HitActor = Hit.GetActor();

				TracerEndPoint = Hit.ImpactPoint;
				float ActualDamage = BaseDamage;
				 SurfaceType = UPhysicalMaterial::DetermineSurfaceType(Hit.PhysMaterial.Get());
				if (SurfaceType == SURFACE_FLESHVULNERABLE) 	ActualDamage *= 4.f;
				UParticleSystem* SelectedEffect = nullptr;
				switch (SurfaceType)
				{
				case SURFACE_FLESHDEFAULT: //This way it doesnt do anything but it doesn break either..so it goes to default;
				case SURFACE_FLESHVULNERABLE:
					SelectedEffect = FleshImpactEffect;

					break;
				default:
					SelectedEffect = DefaulImpactEffect;
					break;
				}
				UGameplayStatics::ApplyPointDamage(HitActor, ActualDamage, ShotDirection, Hit, MyOwner->GetInstigatorController(), MyOwner, DamageType);

				if (SelectedEffect) {
					UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), SelectedEffect, Hit.ImpactPoint, Hit.ImpactNormal.Rotation());

					}
				if (GetLocalRole() == ROLE_Authority) {
					HitScanTrace.TraceTo = TracerEndPoint;
					HitScanTrace.SurfaceType = SurfaceType;
					}
				}
			}

		//	DrawDebugLine(GetWorld(), EyeLocation, TraceEnd, FColor::White, false, 1.f, 0, 1.f);
			PlayFireEffects(TracerEndPoint);

			if (GetLocalRole() == ROLE_Authority) {
				HitScanTrace.TraceTo = TracerEndPoint;
				HitScanTrace.SurfaceType = SurfaceType;
			}
		}
	}
	LastFireTime = GetWorld()->TimeSeconds;
}

void ACGGun::ServerFire_Implementation()
{
	Fire();

}

bool ACGGun::ServerFire_Validate()
{
	return true;
}

void ACGGun::OnRep_HitScanTrace()
{
	PlayFireEffects(HitScanTrace.TraceTo);
	PlayImpactEffects(HitScanTrace.SurfaceType, HitScanTrace.TraceTo);
}

void ACGGun::StartFire()
{
	float DelayOnFirstCall = FMath::Max(LastFireTime + TimeBetweenShots - GetWorld()->TimeSeconds,0.0f);
	GetWorldTimerManager().SetTimer(TimerHandle_WeaponFire, this, &ACGGun::Fire, TimeBetweenShots, true, DelayOnFirstCall);
}

void ACGGun::StopFire()
{
	GetWorldTimerManager().ClearTimer(TimerHandle_WeaponFire);
}

int ACGGun::GetAmmos()const
{
	return Ammos;
}

void ACGGun::ReloadWeapon()
{
	Ammos = MaxAmmos;
}


void ACGGun::PlayFireEffects(FVector TracerEndPoint) const
{
	if (MuzzleEffect) {
		UGameplayStatics::SpawnEmitterAttached(MuzzleEffect, BaseMesh, MuzzleSocketName);
	}
	if (TracerEffect) {
		UParticleSystemComponent* TracerComp = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), TracerEffect, BaseMesh->GetSocketLocation(MuzzleSocketName));
		if (TracerComp) {
			TracerComp->SetVectorParameter(TargetTracerName, TracerEndPoint);
		}
	}
	APawn* MyOwner = Cast<APawn>(GetOwner());
	if (MyOwner) {
		APlayerController* PC = Cast<APlayerController>(MyOwner->GetController());
		if (PC) {
			PC->ClientStartCameraShake(FireCamShake);
		}
	}
}

void ACGGun::PlayImpactEffects(EPhysicalSurface SurfaceType,FVector ImpactPoint) const
{
	UParticleSystem* SelectedEffect = nullptr;
	switch (SurfaceType)
	{
	case SURFACE_FLESHDEFAULT: //This way it doesnt do anything but it doesn break either..so it goes to default;
	case SURFACE_FLESHVULNERABLE:
		SelectedEffect = FleshImpactEffect;

		break;
	default:
		SelectedEffect = DefaulImpactEffect;
		break;
	}
	if (SelectedEffect) {
		FVector MuzzleLocation = BaseMesh->GetSocketLocation(MuzzleSocketName);
		FVector ShotDirection = ImpactPoint - MuzzleLocation;
		ShotDirection.Normalize();

		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), SelectedEffect,ImpactPoint, ShotDirection.Rotation());
	}
}

void ACGGun::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION(ACGGun, HitScanTrace,COND_SkipOwner);
}

