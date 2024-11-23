#pragma once
#include "CoreMinimal.h"
#include "EAIAnimationAction.generated.h"

UENUM(BlueprintType)
enum class EAIAnimationAction : uint8 {
    None,
    HitBlendOut,
    HitEnded,
    DeathRagdoll,
    KnockDownIn,
    KnockDownOut,
    ZombieResurrect,
    ResurectionComplete,
};

