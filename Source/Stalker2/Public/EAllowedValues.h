#pragma once
#include "CoreMinimal.h"
#include "EAllowedValues.generated.h"

UENUM(BlueprintType)
enum class EAllowedValues : uint8 {
    Any,
    NonZero,
    PositiveOnly,
};

