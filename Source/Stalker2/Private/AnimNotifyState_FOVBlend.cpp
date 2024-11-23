#include "AnimNotifyState_FOVBlend.h"

UAnimNotifyState_FOVBlend::UAnimNotifyState_FOVBlend() {
    this->bIsBlendIn = false;
    this->BlendOption = EAlphaBlendOption::Linear;
    this->CustomCurve = NULL;
    this->bShouldBlendWeaponInHands = false;
}


