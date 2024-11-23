#pragma once
#include "CoreMinimal.h"
#include "EWeatherParam.generated.h"

UENUM(BlueprintType)
enum class EWeatherParam : uint8 {
    None,
    RainIntensity,
    GetCount,
};

