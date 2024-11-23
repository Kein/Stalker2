#pragma once
#include "CoreMinimal.h"
#include "EAnimationStealthState.generated.h"

UENUM(BlueprintType)
enum class EAnimationStealthState : uint8 {
    None,
    RelaxToStealthActive,
    StealthToRelaxActive,
    StealthActive,
};

