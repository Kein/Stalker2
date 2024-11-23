#pragma once
#include "CoreMinimal.h"
#include "EGoalPriorityLevel.generated.h"

UENUM(BlueprintType)
enum class EGoalPriorityLevel : uint8 {
    ContextDependent,
    High,
    Critical,
};

