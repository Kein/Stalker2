#include "PoseSearchLocomotionCharacterMovementComponent.h"

UPoseSearchLocomotionCharacterMovementComponent::UPoseSearchLocomotionCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultLandMovementMode = MOVE_NavWalking;
    this->bAlwaysCheckFloor = false;
    this->bProjectNavMeshOnBothWorldChannels = true;
    this->NavWalkingSearchFloorScale = 0.75f;
    this->bNavWalkingOrientToSlope = false;
    this->NavWalkingOrientToSlopeInterpolationSpeed = 10.00f;
    this->FutureLocationPredictionTime = 1.00f;
    this->PredictionBlockedAngle = 30.00f;
}


