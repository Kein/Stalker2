#pragma once
#include "CoreMinimal.h"
#include "EDoorMoveDirection.generated.h"

UENUM(BlueprintType)
enum class EDoorMoveDirection : uint8 {
    CounterClockwise,
    None,
    Clockwise,
    Stop,
};

