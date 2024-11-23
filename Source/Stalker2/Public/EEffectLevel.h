#pragma once
#include "CoreMinimal.h"
#include "EEffectLevel.generated.h"

UENUM(BlueprintType)
enum class EEffectLevel : uint8 {
    None,
    Low,
    Medium,
    Strong,
    Max,
    VeryLow,
    Count,
};

