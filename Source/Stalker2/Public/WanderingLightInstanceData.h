#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "WanderingLightInstanceData.generated.h"

USTRUCT(BlueprintType)
struct FWanderingLightInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FVector BaseLocation;
    
    UPROPERTY(VisibleAnywhere)
    FInterpCurveVector HorizontalMovementCurve;
    
    UPROPERTY(VisibleAnywhere)
    float HorizontalMovementDuration;
    
    UPROPERTY()
    float HorizontalMovementDenom;
    
    UPROPERTY()
    float BaseVerticalOffset;
    
    UPROPERTY()
    bool bCircularMovement;
    
    STALKER2_API FWanderingLightInstanceData();
};

