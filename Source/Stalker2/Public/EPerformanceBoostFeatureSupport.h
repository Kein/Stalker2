#pragma once
#include "CoreMinimal.h"
#include "EPerformanceBoostFeatureSupport.generated.h"

UENUM(BlueprintType)
enum class EPerformanceBoostFeatureSupport : uint8 {
    Supported,
    NotSupported,
    NotSupported_IncompatibleHardware,
    NotSupported_DriverOutOfDate,
    NotSupported_OperatingSystemOutOfDate,
    NotSupported_HardwareSchedulingDisabled,
    NotSupported_ByRHI,
    NotSupported_ByPlatformAtBuildTime,
    NotSupported_IncompatibleAPICaptureToolActive,
};

