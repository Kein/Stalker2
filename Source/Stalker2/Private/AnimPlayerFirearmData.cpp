#include "AnimPlayerFirearmData.h"

FAnimPlayerFirearmData::FAnimPlayerFirearmData() {
    this->IdleType = EWeaponIdleType::Default;
    this->ShutterState = EShutterState::None;
    this->IsJammed = false;
    this->JamIdleIndex = 0;
    this->bTwinMagazineShifted = false;
    this->AdditionalIdle = EWeaponCustomAdditionalIdle::None;
    this->FireTypes = EFireType::None;
    this->LeftHandCurveValueInverse = 0.00f;
    this->WeaponLeftHandCurveValueInverse = 0.00f;
    this->LeftHandMovementAlpha = 0.00f;
    this->bIsLeftHandIdleUnlocked = false;
}

