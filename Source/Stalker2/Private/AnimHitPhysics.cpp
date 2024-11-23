#include "AnimHitPhysics.h"

FAnimHitPhysics::FAnimHitPhysics() {
    this->Control = NULL;
    this->HitConstraintProfile = EAnimConstraintProfile::None;
    this->ImpulseDelay = 0.00f;
    this->HitStrength = 0.00f;
    this->DeadHitStrength = 0.00f;
    this->bEnableAllControlsOnHit = false;
}

