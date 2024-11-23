#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PoseSearchLocomotionAlternativeTags.generated.h"

USTRUCT()
struct FPoseSearchLocomotionAlternativeTags {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TArray<FGameplayTag> Tags;
    
    POSESEARCHLOCOMOTION_API FPoseSearchLocomotionAlternativeTags();
};

