#pragma once
#include "CoreMinimal.h"
#include "EMovementBehaviour.generated.h"

UENUM(BlueprintType)
enum class EMovementBehaviour : uint8 {
    None,
    Idle,
    Walk,
    Run,
    Sprint,
    GetCount,
};

