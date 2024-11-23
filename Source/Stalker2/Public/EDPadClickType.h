#pragma once
#include "CoreMinimal.h"
#include "EDPadClickType.generated.h"

UENUM(BlueprintType)
enum class EDPadClickType : uint8 {
    Up,
    Down,
    Right,
    Left,
};

