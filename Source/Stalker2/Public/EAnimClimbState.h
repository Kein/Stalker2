#pragma once
#include "CoreMinimal.h"
#include "EAnimClimbState.generated.h"

UENUM(BlueprintType)
enum class EAnimClimbState : uint8 {
    None,
    RightUp,
    LeftUp,
    RightDown,
    LeftDown,
    ExitUpLadder,
    EnterUpLadder,
    EnterDownLadder,
    FastDescentStartRight,
    FastDescentStartLeft,
    FastDescentStartBoth,
    FastDescentLoop,
    FastDescentExit,
    FastDescentExitOnTop,
    EnterLastStepUpRight,
    EnterLastStepUpLeft,
    EnterPreLastStepUpRight,
    EnterPreLastStepUpLeft,
    ExitLastStep,
};

