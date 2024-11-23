#pragma once
#include "CoreMinimal.h"
#include "EAutoCoverState.generated.h"

UENUM(BlueprintType)
enum class EAutoCoverState : uint8 {
    StandInCover,
    CanLeanRight,
    CanLeanLeft,
    ApproachCover,
    ApproachCoverLeft,
    ApproachCoverRight,
    AimLeft,
    AimRight,
    AimUp,
    AimlessShootLeft,
    AimlessShootRight,
    AimlessShootUp,
    ExitCover,
    InCoverWithoutCoverAffect,
};

