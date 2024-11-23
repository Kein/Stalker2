#pragma once
#include "CoreMinimal.h"
#include "AnimPlayerWeaponInertiaData.h"
#include "AnimPlayerWeaponSwingData.h"
#include "AnimPlayerDetectorData.generated.h"

class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct STALKER2_API FAnimPlayerDetectorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool bHasDetectorInHands;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USkeletalMeshComponent* DetectorSkeletal;
    
    UPROPERTY(BlueprintReadOnly)
    FAnimPlayerWeaponSwingData SwingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimPlayerWeaponInertiaData InertiaData;
    
    FAnimPlayerDetectorData();
};

