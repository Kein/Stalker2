#pragma once
#include "CoreMinimal.h"
#include "ESwarmInstanceStates.generated.h"

UENUM(BlueprintType)
enum class ESwarmInstanceStates : uint8 {
    NavMoving,
    Flocking,
    Attacking,
    Idle,
    Dying,
    Count,
};

