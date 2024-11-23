#include "BodyPartRestriction.h"

FBodyPartRestriction::FBodyPartRestriction() {
    this->RotationLimit = 0.00f;
    this->RotationSpeed = 0.00f;
    this->RotationBlocked = false;
    this->bShouldRotateIndependently = false;
}

