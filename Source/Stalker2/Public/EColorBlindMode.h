#pragma once
#include "CoreMinimal.h"
#include "EColorBlindMode.generated.h"

UENUM(BlueprintType)
enum class EColorBlindMode : uint8 {
    None,
    Protanopia,
    Deuteranopia,
    Tritanopia,
    GetCount,
};

