#pragma once
#include "CoreMinimal.h"
#include "HumanTransitionAnimations.generated.h"

class UAnimMontage;

USTRUCT()
struct FHumanTransitionAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAnimMontage* TransitionTo;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* TransitionFrom;
    
    STALKER2_API FHumanTransitionAnimations();
};

