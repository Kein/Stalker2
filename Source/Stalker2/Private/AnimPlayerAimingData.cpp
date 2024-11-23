#include "AnimPlayerAimingData.h"

FAnimPlayerAimingData::FAnimPlayerAimingData() {
    this->bAiming = false;
    this->AimInFrame = 0.00f;
    this->AimOutFrame = 0.00f;
    this->AimAlpha = 0.00f;
    this->AimCameraShakeAlpha = 0.00f;
    this->AimState = EAnimationAimState::None;
}

