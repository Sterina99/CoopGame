// Fill out your copyright notice in the Description page of Project Settings.


#include "CGPickUp.h"
#include "Components/SphereComponent.h"
#include "Components/DecalComponent.h"
// Sets default values
ACGPickUp::ACGPickUp()
{
	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Comp"));
	SphereComp->SetSphereRadius(75.f);
	RootComponent = SphereComp;

	DecalComp = CreateDefaultSubobject<UDecalComponent>(TEXT("Decal Comp"));

	DecalComp->SetupAttachment(RootComponent);
	DecalComp->DecalSize = FVector(45.f, 75.f, 75.f);
	
}

// Called when the game starts or when spawned
void ACGPickUp::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACGPickUp::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
}



