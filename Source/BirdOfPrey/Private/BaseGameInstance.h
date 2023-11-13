// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "BaseWeapon.h"
#include "BaseGameInstance.generated.h"

USTRUCT(BlueprintType)
struct FSAgentInfo
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    FText Name;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    TSubclassOf<ABaseWeapon> WeaponType;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    USkeletalMesh* SkeletalMesh;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    TSubclassOf<UAnimInstance> AnimInstance;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    UTexture2D* Image;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float Speed;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float Health;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float MeshScale;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    FLinearColor Colour;
};

/**
 * 
 */
UCLASS()
class UBaseGameInstance : public UGameInstance
{
    GENERATED_BODY()

public:

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
    TArray<FSAgentInfo> PlayerAgentInfo;

public:

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void SetPlayerAgentInfoFor(int PlayerControllerID, FSAgentInfo info);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    FSAgentInfo& GetPlayerAgentInfoFor(int PlayerControllerID, bool& Result);
	
};
