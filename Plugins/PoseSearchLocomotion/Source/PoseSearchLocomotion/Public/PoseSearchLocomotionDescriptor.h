#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PoseSearchLocomotionMoveData.h"
#include "PoseSearchLocomotionDescriptor.generated.h"

UCLASS()
class POSESEARCHLOCOMOTION_API UPoseSearchLocomotionDescriptor : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    TArray<FPoseSearchLocomotionMoveData> Container;
    
public:
    UPoseSearchLocomotionDescriptor();

};

