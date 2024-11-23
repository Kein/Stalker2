#pragma once
#include "CoreMinimal.h"
#include "AnimPlayerAimingData.h"
#include "AnimPlayerBaseWeaponData.h"
#include "AnimPlayerFirearmData.h"
#include "AnimPlayerWeaponData.generated.h"

class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct STALKER2_API FAnimPlayerWeaponData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool bHasWeaponInHands;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USkeletalMeshComponent* WeaponMesh;
    
    UPROPERTY(Instanced)
    USkeletalMeshComponent* AttachMesh;
    
    UPROPERTY(BlueprintReadOnly)
    FAnimPlayerBaseWeaponData BaseWeaponData;
    
    UPROPERTY(BlueprintReadOnly)
    FAnimPlayerAimingData AimingData;
    
    UPROPERTY(BlueprintReadOnly)
    FAnimPlayerFirearmData FirearmData;
    
    FAnimPlayerWeaponData();
};

