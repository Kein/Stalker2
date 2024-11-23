#pragma once
#include "CoreMinimal.h"
#include "ModelCharacterMovementComponent.h"
#include "PoseSearchLocomotionCharacterMovementComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPoseSearchLocomotionCharacterMovementComponent : public UModelCharacterMovementComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NavWalkingSearchFloorScale;
    
private:
    UPROPERTY(EditAnywhere)
    bool bNavWalkingOrientToSlope;
    
    UPROPERTY(EditAnywhere)
    float NavWalkingOrientToSlopeInterpolationSpeed;
    
    UPROPERTY(EditAnywhere)
    float FutureLocationPredictionTime;
    
    UPROPERTY(EditAnywhere)
    float PredictionBlockedAngle;
    
public:
    UPoseSearchLocomotionCharacterMovementComponent(const FObjectInitializer& ObjectInitializer);

};

