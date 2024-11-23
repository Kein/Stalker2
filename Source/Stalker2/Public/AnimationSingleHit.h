#pragma once
#include "CoreMinimal.h"
#include "AnimationSingleHit.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAnimationSingleHit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool bPlay;
    
    UPROPERTY(BlueprintReadOnly)
    float PlayRate;
    
    UPROPERTY(BlueprintReadOnly)
    float HitDirection;
    
    FAnimationSingleHit();
};

