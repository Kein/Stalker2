#include "AnimLocomotionData.h"

FAnimLocomotionData::FAnimLocomotionData() {
    this->Velocity = 0.00f;
    this->AngleDirection = 0.00f;
    this->ClampedDirection = 0.00f;
    this->BPDirection = 0;
    this->Direction = EDirections::None;
    this->LegIKAlpha = 0.00f;
    this->bLegIKEnabled = false;
    this->bEnablePlayRateCurves = false;
}

