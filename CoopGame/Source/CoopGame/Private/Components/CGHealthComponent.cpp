// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/CGHealthComponent.h"
#include "Net/UnrealNetwork.h"
#include "CGPlayerState.h"
#include "CGGameMode.h"

// Sets default values for this component's properties
UCGHealthComponent::UCGHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	//PrimaryComponentTick.bCanEverTick = true;
	DefaultHealth = 100;
	bIsDead = false;
	SetIsReplicatedByDefault(true);

	TeamNum = 0;
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


void UCGHealthComponent::OnRep_Health(float OldHealth)
{
	float Damage = OldHealth - Health;
	OnHealthChanged.Broadcast(this, Health, Damage, nullptr, nullptr, nullptr);
}

void UCGHealthComponent::HandleTakeAnyDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy,
	AActor* DamageCauser)
{
	if (Damage <= 0.0f || bIsDead)
	{
		return;
	}

	if (DamagedActor!=DamageCauser && IsFriendly(DamagedActor, DamageCauser)) 
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

	if (bIsDead) {
		ACGGameMode* GM = Cast<ACGGameMode>(GetWorld()->GetAuthGameMode());
		if (GM) {
			GM->OnActorKilled.Broadcast(GetOwner(), DamageCauser, InstigatedBy);
		}
	}
}

float UCGHealthComponent::GetHealth() const
{
	return Health;
}

void UCGHealthComponent::Heal(float HealAmount)
{
	if (HealAmount <= 0 || Health <= 0) {
		return;
	}
	Health = FMath::Clamp(Health + HealAmount, 0.f, DefaultHealth);
	UE_LOG(LogTemp, Log, TEXT("Health Changed: %s"), *FString::SanitizeFloat(Health));

	OnHealthChanged.Broadcast(this, Health, -HealAmount, nullptr, nullptr, nullptr);

}
/// <summary>
/// if I cannot check the team of one of the two actors, 
/// assume is friendly fire
/// </summary>
/// <param name="ActorA"></param>
/// <param name="ActorB"></param>
/// <returns></returns>
bool UCGHealthComponent::IsFriendly(AActor* ActorA, AActor* ActorB)
{
	if (ActorA == nullptr || ActorB == nullptr) {

		return true;
	}
	UCGHealthComponent* HealthA = Cast<UCGHealthComponent>(ActorA->GetComponentByClass(UCGHealthComponent::StaticClass()));
	UCGHealthComponent* HealthB = Cast<UCGHealthComponent>(ActorB->GetComponentByClass(UCGHealthComponent::StaticClass()));

	if (HealthA == nullptr || HealthB == nullptr) {
		return true;
	}
	return HealthA->TeamNum == HealthB->TeamNum;
}

void UCGHealthComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UCGHealthComponent, Health);
}