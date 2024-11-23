#include "HumanAnimLocomotionData.h"

FHumanAnimLocomotionData::FHumanAnimLocomotionData() {
    this->Velocity = 0.00f;
    this->AngleDirection = 0.00f;
    this->ClampedDirection = 0.00f;
    this->BPDirection = 0;
    this->Direction = EDirections::None;
}

