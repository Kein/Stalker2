#pragma once
#include "CoreMinimal.h"
#include "ERumbleType.generated.h"

UENUM(BlueprintType)
enum class ERumbleType : uint8 {
    None,
    LeftTrigger,
    RightTrigger,
    Triggers,
    LeftGrip,
    RightGrip = 8,
    Grips = 12,
    LeftSide = 5,
    RightSide = 10,
    RightTop,
    RightBottom = 14,
    LeftTop = 7,
    LeftBottop = 13,
    PartiallyLeft = 6,
    PartiallyRight = 9,
    All = 15,
};

