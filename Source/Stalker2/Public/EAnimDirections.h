#pragma once
#include "CoreMinimal.h"
#include "EAnimDirections.generated.h"

UENUM(BlueprintType)
enum class EAnimDirections : uint8 {
    None,
    Forward,
    Backward,
    Left,
    Right,
    ForwardLeft,
    ForwardRight,
    BackwardLeft,
    BackwardRight,
};

