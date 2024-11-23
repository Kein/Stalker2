#pragma once
#include "CoreMinimal.h"
#include "EParticleAction.generated.h"

UENUM(BlueprintType)
enum class EParticleAction : uint8 {
    AttachParticle,
    RemoveParticle,
};

