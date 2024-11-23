#include "PoseSearchLocomotionMovementSettings.h"

FPoseSearchLocomotionMovementSettings::FPoseSearchLocomotionMovementSettings() {
    this->CorridorWidth = 0.00f;
    this->bSimplifyFlipPortals = false;
    this->bSimplifyConvexPortals = false;
    this->bSimplifyConcavePortals = false;
    this->CorridorPathOffset = 0.00f;
    this->CorridorStartOffset = 0.00f;
    this->NarrowFromEndDistance = 0.00f;
    this->IdleSteeringRotationRateDegreesPerSecond = 0.00f;
    this->WalkSteeringRotationRateDegreesPerSecond = 0.00f;
    this->RunSteeringRotationRateDegreesPerSecond = 0.00f;
    this->SprintSteeringRotationRateDegreesPerSecond = 0.00f;
    this->EvadeSteeringRotationRateDegreesPerSecond = 0.00f;
    this->SnappingToPathEndStartDistance = 0.00f;
    this->SnappingToPathEndRatio = 0.00f;
    this->SnappingToPathEndMinVelocity = 0.00f;
}

