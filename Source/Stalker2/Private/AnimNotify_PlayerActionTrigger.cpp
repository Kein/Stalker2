#include "AnimNotify_PlayerActionTrigger.h"

UAnimNotify_PlayerActionTrigger::UAnimNotify_PlayerActionTrigger() {
    this->TriggerNewState = EPlayerActionTriggerState::Deactivate;
    this->ActionTrigger = EPlayerTriggerState::None;
}


