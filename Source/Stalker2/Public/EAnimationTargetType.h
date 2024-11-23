#pragma once
#include "CoreMinimal.h"
#include "EAnimationTargetType.generated.h"

UENUM(BlueprintType)
enum class EAnimationTargetType : uint8 {
    None,
    Stay,
    Sleep,
    Rest,
    Heal,
    InteractWithPDA,
    ReactionOnEmission,
};

