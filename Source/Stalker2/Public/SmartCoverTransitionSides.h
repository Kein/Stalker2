#pragma once
#include "CoreMinimal.h"
#include "EAvailableCoverActionsSide.h"
#include "SmartCoverTransitionSides.generated.h"

USTRUCT()
struct FSmartCoverTransitionSides {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EAvailableCoverActionsSide Side;
    
    UPROPERTY(EditAnywhere)
    EAvailableCoverActionsSide ResultSide;
    
    STALKER2_API FSmartCoverTransitionSides();
};

