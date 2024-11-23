#pragma once
#include "CoreMinimal.h"
#include "EAvoidanceAgentType.generated.h"

UENUM(BlueprintType)
enum class EAvoidanceAgentType : uint8 {
    None,
    AvoidanceAgent,
    ObstacleAgent,
    MoveThroughUnits = 4,
    Default = 3,
};

