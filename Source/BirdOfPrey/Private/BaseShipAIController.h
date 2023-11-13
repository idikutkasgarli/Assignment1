// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseAIController.h"
#include "BaseShipAIController.generated.h"

/**
 * 
 */
UCLASS()
class ABaseShipAIController : public ABaseAIController
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	void ChangeWeaponType(FVector& MoveTarget);
};
