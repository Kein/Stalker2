#pragma once
#include "CoreMinimal.h"
#include "ELineNavigation.generated.h"

UENUM(BlueprintType)
enum class ELineNavigation : uint8 {
    None,
    Up,
    Left,
    Down,
    Right,
};

