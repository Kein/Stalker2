#pragma once
#include "CoreMinimal.h"
#include "EDialogEventCategory.generated.h"

UENUM(BlueprintType)
enum class EDialogEventCategory : uint8 {
    HitReaction,
    NPCInteraction,
    Emission,
    Combat,
    PeacefulReaction,
    ContextualAction,
    GetCount,
};

