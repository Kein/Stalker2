#pragma once
#include "CoreMinimal.h"
#include "MovementPlayRateStructure.h"
#include "SnapshotMapping.h"
#include "AnimPlayerShadowData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAnimPlayerShadowData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSnapshotMapping> SnapshotMapping;
    
    UPROPERTY(BlueprintReadOnly)
    bool bHasWeaponInHands;
    
    UPROPERTY(BlueprintReadOnly)
    bool bAiming;
    
    UPROPERTY(BlueprintReadOnly)
    bool bShouldUseBHLocomotion;
    
    UPROPERTY(BlueprintReadOnly)
    float AngleDirection;
    
    UPROPERTY(BlueprintReadOnly)
    float TurnTime;
    
    UPROPERTY(BlueprintReadOnly)
    FMovementPlayRateStructure MovementPlayRate;
    
    FAnimPlayerShadowData();
};

