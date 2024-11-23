#pragma once
#include "CoreMinimal.h"
#include "EAvailableCoverActionsSide.h"
#include "SmartCoverActionWithSide.generated.h"

class UAnimMontage;

USTRUCT()
struct FSmartCoverActionWithSide {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EAvailableCoverActionsSide Side;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* Montage;
    
    STALKER2_API FSmartCoverActionWithSide();
};

