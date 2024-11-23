#include "AnimNotify_AttachItem.h"

UAnimNotify_AttachItem::UAnimNotify_AttachItem() {
    this->AttachAction = EAttachAction::None;
    this->bForceBindedHandsLookVertical = false;
    this->bShouldOverwritePitch = false;
    this->PitchRotation = 2.80f;
    this->AttachedItem = EAttachType::Silencer;
    this->AttachMesh = NULL;
}


