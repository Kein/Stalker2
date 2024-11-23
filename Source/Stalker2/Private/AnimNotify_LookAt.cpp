#include "AnimNotify_LookAt.h"

UAnimNotify_LookAt::UAnimNotify_LookAt() {
    this->LookAtAction = ELookAtAction::ChangeOwnerState;
    this->LookAtOwnerState = ELookAtOwnerState::CADefault;
    this->AttractionPointType = EAttractionPointType::FollowCharacterBone;
    this->bLookAtPlayer = true;
    this->BoneName = TEXT("jnt_head");
    this->ReactionTime = 0.00f;
    this->Priority = 0;
    this->CollisionChannel = ECC_WorldStatic;
    this->ApplyRestrictionType = EApplyRestrictionType::LeaveSame;
}


