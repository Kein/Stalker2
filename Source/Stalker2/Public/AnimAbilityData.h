#pragma once
#include "CoreMinimal.h"
#include "AnimAbilityData.generated.h"

class UBlendSpace;

USTRUCT(BlueprintType)
struct STALKER2_API FAnimAbilityData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    float BlendAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    float AimOffsetAlphaYaw;
    
    UPROPERTY(BlueprintReadOnly)
    float AimOffsetAlphaPitch;
    
    UPROPERTY(BlueprintReadOnly)
    UBlendSpace* Offset;
    
    FAnimAbilityData();
};

