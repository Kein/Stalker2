#include "AnimNotifyState_AttachItemInteractAction.h"

UAnimNotifyState_AttachItemInteractAction::UAnimNotifyState_AttachItemInteractAction() {
    this->AttachItemType = EAttachItemType::None;
    this->RequiredItemIndex = 0;
    this->MeshToAttach = NULL;
    this->AttachedMesh = NULL;
}


