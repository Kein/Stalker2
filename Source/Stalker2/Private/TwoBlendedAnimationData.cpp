#include "TwoBlendedAnimationData.h"

FTwoBlendedAnimationData::FTwoBlendedAnimationData() {
    this->FirstAnimation = NULL;
    this->SecondAnimation = NULL;
    this->FirstBlendIn = 0.00f;
    this->SecondBlendIn = 0.00f;
    this->bUseFirstAnimation = false;
}

