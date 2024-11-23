#pragma once
#include "CoreMinimal.h"
#include "EUseAbsoluteOrDelta.generated.h"

UENUM(BlueprintType)
enum class EUseAbsoluteOrDelta : uint8 {
    Absolute,
    Delta,
    Count,
};

