#pragma once
#include "CoreMinimal.h"
#include "PoseSearchForceRunInsteadSprintConfigs.h"
#include "PoseSearchMovementTagConfigs.generated.h"

USTRUCT(BlueprintType)
struct FPoseSearchMovementTagConfigs {
    GENERATED_BODY()
public:
	// FIXME need to be exposed in plugin
    //UPROPERTY(BlueprintReadWrite, EditAnywhere)
    //FPoseSearchForceRunInsteadSprintConfigs ForceRunInsteadSprintConfigs;
    
    STALKER2_API FPoseSearchMovementTagConfigs();
};

