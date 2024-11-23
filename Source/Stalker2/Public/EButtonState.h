#pragma once
#include "CoreMinimal.h"
#include "EButtonState.generated.h"

UENUM(BlueprintType)
enum class EButtonState : uint8 {
    Active,
    Blocked,
    Hidden,
};

