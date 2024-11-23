#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PoseSearchLocomotionMoveData.generated.h"

USTRUCT(BlueprintType)
struct FPoseSearchLocomotionMoveData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag Tag;
    
    UPROPERTY(EditAnywhere)
    TArray<FGameplayTag> SubTags;
    
    UPROPERTY(EditAnywhere)
    bool bUseStrafe;
    
    UPROPERTY(EditAnywhere)
    float MoveBehaviorTransitionUseTime;
    
    UPROPERTY(EditAnywhere)
    float MoveBehaviorOnlyTransitionUseTime;
    
    UPROPERTY(EditAnywhere)
    float LinearSpeedUnitsPerSecond;
    
    UPROPERTY(EditAnywhere)
    float PredictionTimeHorizonSeconds;
    
    UPROPERTY(EditAnywhere)
    float PredictionDistanceHorizonUnits;
    
    POSESEARCHLOCOMOTION_API FPoseSearchLocomotionMoveData();
};

