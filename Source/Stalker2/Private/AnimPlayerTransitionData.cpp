#include "AnimPlayerTransitionData.h"

FAnimPlayerTransitionData::FAnimPlayerTransitionData() {
    this->bHasVelocity = false;
    this->bMovingUp = false;
    this->bMovingDown = false;
    this->bReadyForLanding = false;
    this->bCanEnterSprint = false;
    this->LerpToTargetAlpha = 0.00f;
    this->LerpToTargetTime = 0.00f;
}

