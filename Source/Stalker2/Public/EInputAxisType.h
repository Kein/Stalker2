#pragma once
#include "CoreMinimal.h"
#include "EInputAxisType.generated.h"

UENUM(BlueprintType)
enum class EInputAxisType : uint8 {
    None,
    XY,
    Rotate2D,
    Rotate2DInertia,
    Jump,
};

