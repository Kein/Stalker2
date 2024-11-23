#pragma once
#include "CoreMinimal.h"
#include "EPlayerActionInputModifier.generated.h"

UENUM(BlueprintType)
enum class EPlayerActionInputModifier : uint8 {
    None,
    DeadZone,
    Scalar,
    ScaleByDeltaTime,
    SwizzleAxis,
    Negate,
    Smooth,
    ResponseCurveExponential,
    GetCount,
};

