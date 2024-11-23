#pragma once
#include "CoreMinimal.h"
#include "TwoBlendedAnimationData.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct STALKER2_API FTwoBlendedAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UAnimSequence* FirstAnimation;
    
    UPROPERTY(BlueprintReadOnly)
    UAnimSequence* SecondAnimation;
    
    UPROPERTY(BlueprintReadOnly)
    float FirstBlendIn;
    
    UPROPERTY(BlueprintReadOnly)
    float SecondBlendIn;
    
    UPROPERTY(BlueprintReadOnly)
    bool bUseFirstAnimation;
    
    FTwoBlendedAnimationData();
};

