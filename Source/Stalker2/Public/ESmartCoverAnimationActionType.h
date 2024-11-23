#pragma once
#include "CoreMinimal.h"
#include "ESmartCoverAnimationActionType.generated.h"

UENUM(BlueprintType)
enum class ESmartCoverAnimationActionType : uint8 {
    EnterCover,
    LeaveCover,
    StayBehindCover,
    PoseTransition,
    LookFromCover,
    HideBehindCover,
    Shoot,
    ThrowGrenade,
    Count,
};

