#pragma once
#include "CoreMinimal.h"
#include "PhysicsControlData.h"
#include "AnimHitPhysCurves.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct STALKER2_API FAnimHitPhysCurves {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPhysicsControlMultipliers WorldSpaceControlMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* WorldSpaceStrengthMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* WorldSpaceBlendValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPhysicsControlMultipliers ParentSpaceControlMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* ParentSpaceStrengthMultiplier;
    
    FAnimHitPhysCurves();
};

