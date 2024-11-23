#include "AnimPlayerStealthData.h"

FAnimPlayerStealthData::FAnimPlayerStealthData() {
    this->bStealth = false;
    this->StealthInFrame = 0.00f;
    this->StealthOutFrame = 0.00f;
    this->StealthAlpha = 0.00f;
    this->StealthState = EAnimationStealthState::None;
    this->StealthKillSnapCurve = NULL;
}

