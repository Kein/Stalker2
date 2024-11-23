#pragma once
#include "CoreMinimal.h"
#include "DirectionBlendData.h"
#include "EDirections.h"
#include "HumanAnimLocomotionData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FHumanAnimLocomotionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    float Velocity;
    
    UPROPERTY(BlueprintReadOnly)
    float AngleDirection;
    
    UPROPERTY(BlueprintReadOnly)
    float ClampedDirection;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 BPDirection;
    
    UPROPERTY(BlueprintReadOnly)
    EDirections Direction;
    
    UPROPERTY(BlueprintReadOnly)
    FDirectionBlendData DirectionBlendParams;
    
    FHumanAnimLocomotionData();
};

