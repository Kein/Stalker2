#pragma once
#include "CoreMinimal.h"
#include "EItemCacheGenerationType.generated.h"

UENUM(BlueprintType)
enum class EItemCacheGenerationType : uint8 {
    Random,
    PlayerBasedStats,
    Preset,
    Mixed,
};

