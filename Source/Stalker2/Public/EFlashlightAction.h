#pragma once
#include "CoreMinimal.h"
#include "EFlashlightAction.generated.h"

UENUM(BlueprintType)
enum class EFlashlightAction : uint8 {
    Disable,
    TurnOff,
    TurnOn,
};

