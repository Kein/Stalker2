#pragma once
#include "CoreMinimal.h"
#include "EPerformanceBoostUpscalingMethod.generated.h"

UENUM(BlueprintType)
enum class EPerformanceBoostUpscalingMethod : uint8 {
    Unknown,
    None,
    TAA,
    TSR,
    FSR,
    DLSS,
    XeSS,
    Max = XeSS,
};

