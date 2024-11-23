#pragma once
#include "CoreMinimal.h"
#include "PoseSearchForceRunInsteadSprintConfigs.generated.h"

USTRUCT()
struct FPoseSearchForceRunInsteadSprintConfigs {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    float DistanceFromPathStart;
    
    UPROPERTY(Config, EditAnywhere)
    float DistanceToPathEnd;
    
    UPROPERTY(Config, EditAnywhere)
    float DistanceToNextPortal;
    
    UPROPERTY(Config, EditAnywhere)
    float PortalRotationAngleThreshold;
    
    STALKER2_API FPoseSearchForceRunInsteadSprintConfigs();
};

