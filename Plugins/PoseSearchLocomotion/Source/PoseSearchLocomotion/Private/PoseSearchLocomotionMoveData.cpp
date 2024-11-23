#include "PoseSearchLocomotionMoveData.h"

FPoseSearchLocomotionMoveData::FPoseSearchLocomotionMoveData() {
    this->bUseStrafe = false;
    this->MoveBehaviorTransitionUseTime = 0.00f;
    this->MoveBehaviorOnlyTransitionUseTime = 0.00f;
    this->LinearSpeedUnitsPerSecond = 0.00f;
    this->PredictionTimeHorizonSeconds = 0.00f;
    this->PredictionDistanceHorizonUnits = 0.00f;
}

