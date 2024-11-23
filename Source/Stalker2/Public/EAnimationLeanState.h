#pragma once
#include "CoreMinimal.h"
#include "EAnimationLeanState.generated.h"

UENUM(BlueprintType)
enum class EAnimationLeanState : uint8 {
    None,
    LeftIn,
    LeftIdle,
    LeftOut,
    RightIn,
    RightIdle,
    RightOut,
};

