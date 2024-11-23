#include "MovementRotationStructure.h"

FMovementRotationStructure::FMovementRotationStructure() {
    this->TurnTime = 0.00f;
    this->TurnAngle = 0.00f;
    this->bEnableTurnInterp = false;
    this->TurnInterpSpeed = 0.00f;
    this->TurnInterpThreshold = 0.00f;
}

