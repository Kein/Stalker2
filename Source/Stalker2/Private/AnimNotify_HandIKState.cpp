#include "AnimNotify_HandIKState.h"

UAnimNotify_HandIKState::UAnimNotify_HandIKState() {
    this->HandToApply = EAnimationHands::None;
    this->StartValue = 0.00f;
    this->EndValue = 0.00f;
    this->BlendTime = 0.20f;
    this->BlendOption = EAlphaBlendOption::Cubic;
}


