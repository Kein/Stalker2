#pragma once
#include "CoreMinimal.h"
#include "EUpdateGeneration.generated.h"

UENUM(BlueprintType)
enum class EUpdateGeneration : uint8 {
    None,
    Reputation,
    Time,
    TimeDays = 4,
    Rank = 8,
    Difficulty = 16,
};

