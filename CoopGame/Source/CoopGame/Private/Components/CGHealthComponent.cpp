// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/CGHealthComponent.h"
#include "Net/UnrealNetwork.h"
// Sets default values for this component's properties
UCGHealthComponent::UCGHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	//PrimaryComponentTick.bCanEverTick = true;
	DefaultHealth = 100;
	bIsDead = false;
	SetIsReplicatedByDefault(true);


	// ...
}


// Called when the game starts
void UCGHealthComponent::BeginPlay()
{
	Super::BeginPlay();
	AActor* MyOwner = GetOwner();
	if (MyOwner)
	{
		//handle only on server
		if (GetOwnerRole() == ROLE_Authority){

		MyOwner->OnTakeAnyDamage.AddDynamic(this, &UCGHealthComponent::HandleTakeAnyDamage);
		// ...
		}
	}
		Health = DefaultHealth;
}


void UCGHealthComponent::HandleTakeAnyDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy,
	AActor* DamageCauser)
{
	if (Damage <= 0.0f || bIsDead)
	{
		return;
	}

	Health = FMath::Clamp(Health - Damage, 0.0f, DefaultHealth);

	UE_LOG(LogTemp, Log, TEXT("Health Changed: %s"), *FString::SanitizeFloat(Health));
	if (Health <= 0.0f)
	{
		bIsDead = true;
	}

	OnHealthChanged.Broadcast(this, Health, Damage, DamageType, InstigatedBy, DamageCauser);
}

void UCGHealthComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UCGHealthComponent, Health);
}