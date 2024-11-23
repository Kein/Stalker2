#pragma once
#include "CoreMinimal.h"
#include "EAvailableCoverActionsSide.h"
#include "EAvailableCoverEnterTypes.h"
#include "SmartCoverEnterTypes.generated.h"

USTRUCT()
struct FSmartCoverEnterTypes {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EAvailableCoverActionsSide Side;
    
    UPROPERTY(EditAnywhere)
    EAvailableCoverEnterTypes EnterType;
    
    STALKER2_API FSmartCoverEnterTypes();
};

