#pragma once
#include "CoreMinimal.h"
#include "EPlayerActionInputTypeCustom.generated.h"

UENUM(BlueprintType)
enum class EPlayerActionInputTypeCustom : uint8 {
    ToggleOrHold,
    HoldOnly,
    ToggleOnly,
};

