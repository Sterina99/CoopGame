// Fill out your copyright notice in the Description page of Project Settings.


#include "CGGun.h"
#include "Components/SkeletalMeshComponent.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ACGGun::ACGGun()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BaseMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BaseMesh"));
	RootComponent = BaseMesh;
}

// Called when the game starts or when spawned
void ACGGun::BeginPlay()
{
	Super::BeginPlay();
	
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
		//more cost, but more efficient :D
		QueryParams.bTraceComplex = true;

		FHitResult Hit;

		if(GetWorld()->LineTraceSingleByChannel(Hit, EyeLocation, TraceEnd, ECC_Visibility, QueryParams)){

			//proccess damage
			AActor* HitActor = Hit.GetActor();
			UGameplayStatics::ApplyPointDamage(HitActor, 20.f, ShotDirection, Hit, MyOwner->GetInstigatorController(), this, DamageType);
			
		}

		DrawDebugLine(GetWorld(), EyeLocation, TraceEnd, FColor::White, false, 1.f, 0, 1.f);

	}
}

// Called every frame
void ACGGun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

