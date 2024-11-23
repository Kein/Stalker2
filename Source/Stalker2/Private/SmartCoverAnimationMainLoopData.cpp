#include "SmartCoverAnimationMainLoopData.h"

FSmartCoverAnimationMainLoopData::FSmartCoverAnimationMainLoopData() {
    this->ActionType = ESmartCoverActionType::Blind;
    this->LookAtOwnerState = ELookAtOwnerState::Empty;
    this->TargetActionSide = EAvailableCoverActionsSide::None;
    this->IdleMontage = NULL;
    this->ThrowGrenadeMontage = NULL;
}

