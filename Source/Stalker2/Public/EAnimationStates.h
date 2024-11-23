#pragma once
#include "CoreMinimal.h"
#include "EAnimationStates.generated.h"

UENUM(BlueprintType)
enum class EAnimationStates : uint8 {
    None,
    Stand,
    Walking,
    Running,
    Sprinting,
    Crouching,
    LowCrouching,
};

