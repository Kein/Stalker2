#pragma once
#include "CoreMinimal.h"
#include "EInteractFXType.generated.h"

UENUM()
enum class EInteractFXType : int32 {
    None,
    LadderIdle = 2,
    LadderMovementHand = 4,
    LadderMovementFoot = 8,
    LadderMovementJump = 16,
    LadderMovementFast = 32,
    LadderStartInteractBottom = 64,
    LadderEndInteractTop = 128,
    LadderStartInteractTop = 256,
    LadderEndInteractBot = 512,
    LadderMevementFastEnd = 1024,
    Ladder = 2046,
};

