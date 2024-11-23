#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WLCylinderShapeParams.generated.h"

USTRUCT(BlueprintType)
struct FWLCylinderShapeParams {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Location;
    
    UPROPERTY()
    float Radius;
    
    UPROPERTY()
    float ZMin;
    
    UPROPERTY()
    float ZMax;
    
    STALKER2_API FWLCylinderShapeParams();
};

