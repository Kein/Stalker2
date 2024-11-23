#pragma once
#include "CoreMinimal.h"
#include "EInputTypeForButtons.generated.h"

UENUM(BlueprintType)
enum class EInputTypeForButtons : uint8 {
    Both,
    Gamepad,
    Keyboard,
};

