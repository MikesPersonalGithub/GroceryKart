// Fill out your copyright notice in the Description page of Project Settings.

#include "GKPlayerController.h"

AGKPlayerController::AGKPlayerController(const FObjectInitializer& ObjectInitializer)
{
}

void AGKPlayerController::BeginPlay()
{
	// configure input mode
	FInputModeUIOnly InputModeData;
	InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	SetInputMode(InputModeData);
	bShowMouseCursor = true;
}
