#pragma once
#include "CoreMinimal.h"
#include "EProjectilePropagation.generated.h"

UENUM(BlueprintType)
enum class EProjectilePropagation : uint8 {
    None,
    FlyFixedAngle,
    FlyFixedSpeed,
    FlyFixedPoint,
    FlyFixedDirection,
    FollowTarget,
    FlyRandomDirection,
    GetCount,
};

