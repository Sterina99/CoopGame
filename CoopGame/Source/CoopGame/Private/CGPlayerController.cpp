// Fill out your copyright notice in the Description page of Project Settings.


#include "CGPlayerController.h"
#include "Blueprint/UserWidget.h"

void ACGPlayerController::BeginPlay() {
	Super::BeginPlay();

	HUD = CreateWidget(this, HUDClass);
	if (HUD) {
		HUD->AddToViewport();
	}
}