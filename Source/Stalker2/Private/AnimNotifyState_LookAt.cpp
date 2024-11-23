#include "AnimNotifyState_LookAt.h"

UAnimNotifyState_LookAt::UAnimNotifyState_LookAt() {
    this->AttractionPointType = EAttractionPointType::FollowCharacterBone;
    this->bLookAtPlayer = true;
    this->BoneName = TEXT("jnt_head");
    this->ReactionTime = 0.00f;
    this->Priority = 0;
    this->CollisionChannel = ECC_WorldStatic;
    this->ApplyRestrictionType = EApplyRestrictionType::LeaveSame;
}


