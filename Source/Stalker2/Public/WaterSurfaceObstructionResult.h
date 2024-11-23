#pragma once
#include "CoreMinimal.h"
#include "WaterSurfaceObstructionResult.generated.h"

USTRUCT(BlueprintType)
struct FWaterSurfaceObstructionResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool bObstructed;
    
    UPROPERTY(BlueprintReadOnly)
    double DistanceToWater;
    
    STALKER2_API FWaterSurfaceObstructionResult();
};

