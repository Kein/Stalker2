#pragma once
#include "CoreMinimal.h"
#include "EContextualItemAttachType.generated.h"

UENUM()
enum class EContextualItemAttachType : int32 {
    AttachNewStaticMesh,
    AttachNewSkeletalMesh,
    AttachItemFromScene,
    AttachParticleSystem,
};

