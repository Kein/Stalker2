#pragma once
#include "CoreMinimal.h"
#include "VortexSplineDataPoint.generated.h"

USTRUCT(BlueprintType)
struct FVortexSplineDataPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TargetSpeed;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float DistanceFromStart;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 PointIndex;
    
    STALKER2_API FVortexSplineDataPoint();
};

