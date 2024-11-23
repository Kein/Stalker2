#pragma once
#include "CoreMinimal.h"
#include "ECrosshairType.generated.h"

UENUM(BlueprintType)
enum class ECrosshairType : uint8 {
    Cross,
    Circle,
    Point,
    Arc,
    Empty,
    GetCount,
};

