// Fill out your copyright notice in the Description page of Project Settings.


#include "CGGrenadeLauncher.h"
#include "CGGrenadeProjectile.h"

ACGGrenadeLauncher::ACGGrenadeLauncher() {

	//Super::ACGGun();

}
void ACGGrenadeLauncher::Fire(){
	//Set Spawn Collision Handling Override
	FActorSpawnParameters ActorSpawnParams;
	ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
	ActorSpawnParams.Instigator =Cast<APawn>(GetOwner());
	if (ActorSpawnParams.Instigator) {
		AActor* MyOwner = GetOwner();
		FVector EyeLocation;
		FRotator EyeRotation;
		MyOwner->GetActorEyesViewPoint(EyeLocation,EyeRotation);
		GetWorld()->SpawnActor<ACGGrenadeProjectile>(
			ProjectileClass,
			BaseMesh->GetSocketLocation(MuzzleSocketName),
			EyeRotation,
			ActorSpawnParams);
	}
}