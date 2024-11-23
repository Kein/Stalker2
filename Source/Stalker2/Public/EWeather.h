#pragma once
#include "CoreMinimal.h"
#include "EWeather.generated.h"

UENUM(BlueprintType)
enum class EWeather : uint8 {
    Clearly,
    Cloudy,
    Fogy,
    Stormy,
    LightRainy,
    Rainy,
    Thundery,
    Emission,
    CalmBeforeEmission,
    Count,
};

