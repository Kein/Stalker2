#pragma once
#include "CoreMinimal.h"
#include "MovementPlayRateStructure.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FMovementPlayRateStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    float ForwardValue;
    
    UPROPERTY(BlueprintReadOnly)
    float RightValue;
    
    UPROPERTY(BlueprintReadOnly)
    float PlayRate;
    
    UPROPERTY(BlueprintReadOnly)
    float LastForwardValue;
    
    UPROPERTY(BlueprintReadOnly)
    float LastRightValue;
    
    FMovementPlayRateStructure();
};

