// Fill out your copyright notice in the Description page of Project Settings.


#include "CGGun.h"
#include "Components/SkeletalMeshComponent.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Particles\ParticleSystem.h"
#include "Particles/ParticleSystemComponent.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "CoopGame/CoopGame.h"

// Sets default values
ACGGun::ACGGun()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
//	PrimaryActorTick.bCanEverTick = true;
	BaseMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BaseMesh"));
	RootComponent = BaseMesh;


}

// Called when the game starts or when spawned
void ACGGun::BeginPlay()
{
	Super::BeginPlay();
	MuzzleSocketName = "MuzzleSocket";
	TargetTracerName = "Target";
	TimeBetweenShots = 60 / FireRate;
	
}

void ACGGun::Fire()
{
	AActor* MyOwner = GetOwner();

	if (MyOwner)
	{
		FVector EyeLocation;
		FRotator EyeRotation;
		MyOwner->GetActorEyesViewPoint(EyeLocation, EyeRotation);

		FVector ShotDirection = EyeRotation.Vector();
		FVector TraceEnd = EyeLocation + EyeRotation.Vector() * 1000;
		FCollisionQueryParams QueryParams;
		QueryParams.AddIgnoredActor(MyOwner);
		QueryParams.AddIgnoredActor(this);
		QueryParams.bReturnPhysicalMaterial = true;
		//more cost, but more efficient :D
		QueryParams.bTraceComplex = true;

		//Particle "Target" paramenter
		FVector TracerEndPoint = TraceEnd;
		FHitResult Hit;

		if(GetWorld()->LineTraceSingleByChannel(Hit, EyeLocation, TraceEnd, COLLISION_WEAPON, QueryParams)){

			//proccess damage
			AActor* HitActor = Hit.GetActor();
			
			TracerEndPoint = Hit.ImpactPoint;
			float ActualDamage = BaseDamage;
			EPhysicalSurface SurfaceType = UPhysicalMaterial::DetermineSurfaceType(Hit.PhysMaterial.Get());
			if (SurfaceType == SURFACE_FLESHVULNERABLE) 	ActualDamage *= 4.f;
			UParticleSystem* SelectedEffect=nullptr;
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
			UGameplayStatics::ApplyPointDamage(HitActor, ActualDamage, ShotDirection, Hit, MyOwner->GetInstigatorController(), this, DamageType);
			if (SelectedEffect) {
				UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), SelectedEffect, Hit.ImpactPoint, Hit.ImpactNormal.Rotation());

			}
		}

		DrawDebugLine(GetWorld(), EyeLocation, TraceEnd, FColor::White, false, 1.f, 0, 1.f);
		PlayFireEffects(TracerEndPoint);
	}
	LastFireTime = GetWorld()->TimeSeconds;
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
			PC->ClientPlayCameraShake(FireCamShake);
		}
	}
}

