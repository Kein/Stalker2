#include "AnimNotify_ChangeWeaponIdle.h"

UAnimNotify_ChangeWeaponIdle::UAnimNotify_ChangeWeaponIdle() {
    this->WeaponIdle = EWeaponIdleState::ShutterState;
    this->NewShutterState = EShutterState::ReadyToShoot;
    this->NewJamIndex = -1;
    this->NewUnderbarrelState = EWeaponIdleType::Default;
    this->NewAimState = EAnimationAimState::None;
    this->AdditionalType = EWeaponCustomAdditionalIdle::None;
}


