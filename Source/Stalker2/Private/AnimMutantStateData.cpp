#include "AnimMutantStateData.h"

FAnimMutantStateData::FAnimMutantStateData() {
    this->bRotating = false;
    this->bStandToSit = false;
    this->bIsLeftHanded = false;
    this->ChanceToBeLeftHanded = 0.00f;
    this->IsRotatingAngleThreshold = 0.00f;
    this->Awareness = EAwareness::None;
    this->bShouldDisableLegIK = false;
    this->bShouldDisableInertialization = false;
}

