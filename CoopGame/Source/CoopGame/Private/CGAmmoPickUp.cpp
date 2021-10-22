// Fill out your copyright notice in the Description page of Project Settings.


#include "CGAmmoPickUp.h"
#include "Components/SphereComponent.h"
#include "CGCharacter.h"
#include "CGGun.h"

ACGAmmoPickUp::ACGAmmoPickUp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;
	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Comp"));
	SphereComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	SphereComp->SetCollisionProfileName("Pawn");

	RootComponent = SphereComp;
}

// Called when the game starts or when spawned
void ACGAmmoPickUp::BeginPlay()
{
	Super::BeginPlay();
	SphereComp->OnComponentBeginOverlap.AddDynamic(this, &ACGAmmoPickUp::PickUp);
	
}

void ACGAmmoPickUp::PickUp(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("TryingToPickUp"));
	UE_LOG(LogTemp, Warning, TEXT("%s"), *OtherActor->GetName());
	ACGCharacter* Player = Cast<ACGCharacter>(OtherActor);
	if (Player) {
		Player->AddMagazine();
	}
}

