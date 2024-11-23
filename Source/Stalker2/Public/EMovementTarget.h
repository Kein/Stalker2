#pragma once
#include "CoreMinimal.h"
#include "EMovementTarget.generated.h"

UENUM(BlueprintType)
enum class EMovementTarget : uint8 {
    Path_Legacy,
    Path,
    DynamicObject,
};

