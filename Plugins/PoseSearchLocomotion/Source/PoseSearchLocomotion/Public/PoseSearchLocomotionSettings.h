#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PoseSearch/PoseSearchLibrary.h"
#include "PoseSearchLocomotionMovementSettings.h"
#include "PoseSearchLocomotionTrajectorySettings.h"
#include "PoseSearchLocomotionSettings.generated.h"

UCLASS(Config=Engine	)
class POSESEARCHLOCOMOTION_API UPoseSearchLocomotionSettings : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Config, EditAnywhere)
    FMotionMatchingSettings MotionMatchingSettings;
    
    UPROPERTY(Config, EditAnywhere)
    FPoseSearchLocomotionTrajectorySettings TrajectorySettings;
    
    UPROPERTY(Config, EditAnywhere)
    FPoseSearchLocomotionMovementSettings MovementSettings;
    
public:
    UPoseSearchLocomotionSettings();

};

