// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GKPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class GROCERYKART_API AGKPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:

	// Constructors
	AGKPlayerController(const FObjectInitializer& ObjectInitializer);
	
	// Function Overrides
	virtual void BeginPlay() override;

};
