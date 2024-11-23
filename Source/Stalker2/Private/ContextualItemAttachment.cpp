#include "ContextualItemAttachment.h"

FContextualItemAttachment::FContextualItemAttachment() {
    this->ContextualItemAttachType = EContextualItemAttachType::AttachNewStaticMesh;
    this->MeshToBeAttached = NULL;
    this->SkeletalMeshToBeAttached = NULL;
    this->NiagaraAsset = NULL;
}

