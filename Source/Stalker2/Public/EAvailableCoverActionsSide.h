#pragma once
#include "CoreMinimal.h"
#include "EAvailableCoverActionsSide.generated.h"

UENUM(BlueprintType)
enum class EAvailableCoverActionsSide : uint8 {
    None,
    Left,
    Right,
    Center = 4,
};

