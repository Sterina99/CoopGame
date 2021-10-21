// Fill out your copyright notice in the Description page of Project Settings.


#include "CGGrenadeProjectile.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystem.h"
// Sets default values
ACGGrenadeProjectile::ACGGrenadeProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;
	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Base Mesh"));
	CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("Collision Component"));
	
	CollisionComp->SetCollisionProfileName("Grenade");
	RootComponent = CollisionComp;
	BaseMesh->SetupAttachment(RootComponent);
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement"));
	ProjectileMovement->UpdatedComponent = RootComponent;
	ProjectileMovement->InitialSpeed = 30.f;
	ProjectileMovement->MaxSpeed = 30.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = true;
}

// Called when the game starts or when spawned
void ACGGrenadeProjectile::BeginPlay()
{
	Super::BeginPlay();
	IgnoredActors.Add(this);
	GetWorldTimerManager().SetTimer(MyTimer,this,&ACGGrenadeProjectile::Explode, 1.4f, false);
	AActor* MyPlayer=Cast<AActor>(GetWorld()->GetFirstPlayerController());
	if(MyPlayer)
	IgnoredActors.Add(MyPlayer);
}

// Called every frame
/*
void ACGGrenadeProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
*/
void ACGGrenadeProjectile::Explode() {
	bool HasHit = false;
	DrawDebugSphere(GetWorld(), GetActorLocation(), 40.f, 12, FColor::Red, true);
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(),ExplosionEffect, GetActorLocation());
	
	HasHit=UGameplayStatics::ApplyRadialDamage(GetWorld(), 40.f, GetActorLocation(), DamageRadius, DamageType,IgnoredActors,this,nullptr,true);
	if (HasHit) {
		UE_LOG(LogTemp, Warning, TEXT("BOOM"));
	}
	Destroy();
}

