#pragma once
#include "CoreMinimal.h"
#include "ETickSlicingGroup.generated.h"

UENUM(BlueprintType)
enum class ETickSlicingGroup : uint8 {
    SkipTick,
    HighestPriority,
    HighPriority,
    MediumPriority,
    LowPriority,
    GetCount,
};

