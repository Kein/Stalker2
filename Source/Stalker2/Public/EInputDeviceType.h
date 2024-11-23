#pragma once
#include "CoreMinimal.h"
#include "EInputDeviceType.generated.h"

UENUM(BlueprintType)
enum class EInputDeviceType : uint8 {
    None,
    Keyboard,
    Mouse,
    Gamepad,
};

