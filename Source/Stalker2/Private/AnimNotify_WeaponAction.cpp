#include "AnimNotify_WeaponAction.h"

UAnimNotify_WeaponAction::UAnimNotify_WeaponAction() {
    this->WeaponAction = EWeaponAction::ToggleTwinMagazineShift;
    this->bEnableTwinMagazineShift = false;
    this->ForcedIdle = EShutterState::ReadyToShoot;
    this->AttachIdleType = EAttackActionType::Idle;
    this->ShowBulletMeshes = false;
    this->IsUnlocked = false;
}


