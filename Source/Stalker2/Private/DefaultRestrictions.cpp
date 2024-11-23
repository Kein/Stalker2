#include "DefaultRestrictions.h"

FDefaultRestrictions::FDefaultRestrictions() {
    this->bEnabled = false;
    this->bIgnoreDuringEmission = false;
    this->GlobalRestriction = ESpaceRestrictionType::None;
}

