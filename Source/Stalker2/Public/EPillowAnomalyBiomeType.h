#pragma once
#include "CoreMinimal.h"
#include "EPillowAnomalyBiomeType.generated.h"

UENUM(BlueprintType)
enum class EPillowAnomalyBiomeType : uint8 {
    None,
    Rock,
    Forest,
    Urban,
    RedForest,
    Industrial,
    Paper,
};

