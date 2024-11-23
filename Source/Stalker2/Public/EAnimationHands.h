#pragma once
#include "CoreMinimal.h"
#include "EAnimationHands.generated.h"

UENUM(BlueprintType)
enum class EAnimationHands : uint8 {
    None,
    LeftHand,
    RightHand,
    BothHand,
};

