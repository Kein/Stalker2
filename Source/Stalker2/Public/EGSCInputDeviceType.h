#pragma once
#include "CoreMinimal.h"
#include "EGSCInputDeviceType.generated.h"

UENUM(BlueprintType)
enum class EGSCInputDeviceType : uint8 {
    MouseKeyboard,
    DefaultGamepad,
    Undefined,
};

