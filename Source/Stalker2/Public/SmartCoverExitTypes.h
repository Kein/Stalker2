#pragma once
#include "CoreMinimal.h"
#include "EAvailableCoverActionsSide.h"
#include "EAvailableCoverExitTypes.h"
#include "SmartCoverExitTypes.generated.h"

USTRUCT()
struct FSmartCoverExitTypes {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EAvailableCoverActionsSide Side;
    
    UPROPERTY(EditAnywhere)
    EAvailableCoverExitTypes ExitType;
    
    STALKER2_API FSmartCoverExitTypes();
};

