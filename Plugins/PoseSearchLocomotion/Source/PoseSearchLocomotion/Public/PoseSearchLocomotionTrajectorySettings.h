#pragma once
#include "CoreMinimal.h"
#include "PoseSearchLocomotionTrajectorySettings.generated.h"

USTRUCT(BlueprintType)
struct FPoseSearchLocomotionTrajectorySettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    float SampleRate;
    
    UPROPERTY(Config, EditAnywhere)
    float HistoryExpirationSeconds;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<FName, float> HistoryExpirationSecondsByAgent;
    
    UPROPERTY(Config, EditAnywhere)
    float TransitionTimeSeconds;
    
    POSESEARCHLOCOMOTION_API FPoseSearchLocomotionTrajectorySettings();
};

