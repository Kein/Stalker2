#pragma once
#include "CoreMinimal.h"
#include "EALifeFactionGoalType.generated.h"

UENUM(BlueprintType)
enum class EALifeFactionGoalType : uint8 {
    Aggressive,
    Normal,
    Defensive,
    GetCount,
};

