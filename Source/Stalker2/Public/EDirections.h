#pragma once
#include "CoreMinimal.h"
#include "EDirections.generated.h"

UENUM(BlueprintType)
enum class EDirections : uint8 {
    None,
    Forward,
    Backward = 4,
    Left = 8,
    Right = 16,
    ForwardLeft = 9,
    ForwardRight = 17,
    BackwardLeft = 12,
    BackwardRight = 20,
};

