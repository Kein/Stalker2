#pragma once
#include "CoreMinimal.h"
#include "WeightedFacialAnimation.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FWeightedFacialAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Weight;
    
    UPROPERTY(EditAnywhere)
    UAnimSequenceBase* FaceAnimation;
    
    UPROPERTY(EditAnywhere)
    float StartTime;
    
    STALKER2_API FWeightedFacialAnimation();
};

