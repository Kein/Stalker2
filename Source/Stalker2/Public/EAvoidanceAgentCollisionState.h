#pragma once
#include "CoreMinimal.h"
#include "EAvoidanceAgentCollisionState.generated.h"

UENUM(BlueprintType)
enum class EAvoidanceAgentCollisionState : uint8 {
    None,
    IgnoreUnits,
    IgnorePlayer,
    IgnoreAll,
};

