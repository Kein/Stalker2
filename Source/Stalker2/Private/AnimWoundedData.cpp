#include "AnimWoundedData.h"

FAnimWoundedData::FAnimWoundedData() {
    this->bWounded = false;
    this->WoundedState = EWoundedAnimState::NotWounded;
    this->EnterRagdollTime = 0.00f;
    this->SlopeTestSweepUpOffset = 0.00f;
    this->SlopeTestSweepDownOffset = 0.00f;
    this->SlopeTestSweepSphereRadius = 0.00f;
    this->SlopeTestCollisionChannel = ECC_WorldStatic;
}

