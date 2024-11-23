#pragma once
#include "CoreMinimal.h"
#include "EAvailableCoverActionsSide.h"
#include "SmartCoverActionSide.generated.h"

USTRUCT()
struct FSmartCoverActionSide {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EAvailableCoverActionsSide Side;
    
    STALKER2_API FSmartCoverActionSide();
};

