#include "AnimNotify_HideBones.h"

UAnimNotify_HideBones::UAnimNotify_HideBones() {
    this->BoneInteractionType = EBoneInteractionType::HideBone;
    this->bPropagateToChildren = false;
    this->bHideBone = false;
    this->AmmoCount = 0;
}


