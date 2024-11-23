#pragma once
#include "CoreMinimal.h"
#include "EWanderingLightsSimulationState.generated.h"

UENUM(BlueprintType)
enum class EWanderingLightsSimulationState : uint8 {
    Disabled,
    WakingUp,
    Idle,
    HasTarget,
    Active,
    ShuttingDown,
};

