#include "AnimNotify_PlayerAction.h"

UAnimNotify_PlayerAction::UAnimNotify_PlayerAction() {
    this->PlayerActionResult = EPlayerActionResult::End;
    this->PlayerActionType = EActionType::HideMainItem;
    this->PlayerTriggerToOverride = EPlayerTriggerState::AimTrigger;
    this->PlayerActionTypeToOverride = EActionType::ReloadWeapon;
}


