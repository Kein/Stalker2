#include "AnimPlayerWeaponPushbackData.h"

FAnimPlayerWeaponPushbackData::FAnimPlayerWeaponPushbackData() {
    this->PushbackInteprolateTolerance = 0.00f;
    this->PushbackInteprolateSpeed = 0.00f;
    this->State = EAnimPushbackState::Inactive;
    this->Alpha = 0.00f;
}

