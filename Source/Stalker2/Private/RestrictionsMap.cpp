#include "RestrictionsMap.h"

FRestrictionsMap::FRestrictionsMap() {
    this->bIsFullBodyRotationBlocked = false;
    this->UpperBodyHorizontalLimit = 0.00f;
    this->UpperBodyVerticalLimit = 0.00f;
    this->bRotateFullBodyDespiteUpperBody = false;
    this->InteractLimit = 0.00f;
    this->bOnlyHeadRotateOnUpperBody = false;
    this->bFullBodyRotateSatisfyAngle = 0.00f;
}

