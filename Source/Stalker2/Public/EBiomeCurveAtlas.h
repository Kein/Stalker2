#pragma once
#include "CoreMinimal.h"
#include "EBiomeCurveAtlas.generated.h"

UENUM(BlueprintType)
enum class EBiomeCurveAtlas : uint8 {
    Default,
    RedForest,
    Urban,
    OrdinaryForest,
    Water,
    Swamp,
    Road,
    DeadForest,
    PineForest,
    GetCount,
};

