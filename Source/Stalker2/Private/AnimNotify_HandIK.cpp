#include "AnimNotify_HandIK.h"

UAnimNotify_HandIK::UAnimNotify_HandIK() {
    this->HandToApply = EAnimationHands::None;
    this->bForceSetStartValue = false;
    this->StartValue = 0.00f;
    this->EndValue = 0.00f;
    this->BlendTime = 0.20f;
    this->BlendOption = EAlphaBlendOption::Cubic;
}


