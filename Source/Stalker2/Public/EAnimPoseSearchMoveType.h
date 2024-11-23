#pragma once
#include "CoreMinimal.h"
#include "EAnimPoseSearchMoveType.generated.h"

UENUM(BlueprintType)
enum class EAnimPoseSearchMoveType : uint8 {
    Idle,
    Move,
    Start,
    Stop,
    DirectionChange,
};

