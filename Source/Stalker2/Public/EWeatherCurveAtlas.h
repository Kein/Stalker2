#pragma once
#include "CoreMinimal.h"
#include "EWeatherCurveAtlas.generated.h"

UENUM(BlueprintType)
enum class EWeatherCurveAtlas : uint8 {
    Default,
    Sunny,
    Cloud,
    GetCount,
};

