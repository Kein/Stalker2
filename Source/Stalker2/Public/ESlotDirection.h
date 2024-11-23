#pragma once
#include "CoreMinimal.h"
#include "ESlotDirection.generated.h"

UENUM(BlueprintType)
enum class ESlotDirection : uint8 {
    Up,
    Right,
    Down,
    Left,
    None,
};

