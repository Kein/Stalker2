#pragma once
#include "CoreMinimal.h"
#include "EPlayerMovementType.generated.h"

UENUM(BlueprintType)
enum class EPlayerMovementType : uint8 {
    None,
    Walk,
    Jump,
    Crouch = 4,
    All = 7,
};

