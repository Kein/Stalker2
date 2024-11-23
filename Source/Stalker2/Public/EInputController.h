#pragma once
#include "CoreMinimal.h"
#include "EInputController.generated.h"

UENUM(BlueprintType)
enum class EInputController : uint8 {
    KeyboardAndMouse,
    Dualshock4,
    XboxSeriesXPad,
};

