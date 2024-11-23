#pragma once
#include "CoreMinimal.h"
#include "TransitionAnimations.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FTransitionAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* To;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* From;
    
    STALKER2_API FTransitionAnimations();
};

