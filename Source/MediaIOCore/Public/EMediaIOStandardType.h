#pragma once
#include "CoreMinimal.h"
#include "EMediaIOStandardType.generated.h"

UENUM()
enum class EMediaIOStandardType : int32 {
    Progressive,
    Interlaced,
    ProgressiveSegmentedFrame,
};

