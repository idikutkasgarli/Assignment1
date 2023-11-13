// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BasePlayerController.h"
#include "BaseGameAgent.h"
#include "BaseAIController.generated.h"

/**
 * 
 */
UCLASS()
class ABaseAIController : public AAIController
{
	GENERATED_BODY()


public:

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey|Firing")
    float LastFireTime;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey|Firing")
    bool bIsFiring;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey|Firing")
    float RefireDelay;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey|Firing")
    bool bShouldUpdateAim;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    ABasePlayerController* Target;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    ABaseGameAgent* ControlledAgent;


public:

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void SelectTarget();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void AimAt(FVector AimTarget);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void CheckFire();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void UpdateAim();

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
    bool ShouldStartFire();

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
    bool ShouldStopFire();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void StartFire();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void StopFire();

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
    bool ShouldUpdateAim();
};
