#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AnimHumanAimingData.h"
#include "AnimHumanWeaponData.generated.h"

class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct STALKER2_API FAnimHumanWeaponData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool bHasWeaponInHands;
    
    UPROPERTY(BlueprintReadOnly)
    FAnimHumanAimingData AimingData;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsZombie;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USkeletalMeshComponent* WeaponMesh;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USkeletalMeshComponent* AttachMesh;
    
    UPROPERTY(BlueprintReadOnly)
    FVector WeaponIKEffectorOffset;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsOneHanded;
    
    FAnimHumanWeaponData();
};

