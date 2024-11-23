#pragma once
#include "CoreMinimal.h"
#include "ECurveAtlasParameter.generated.h"

UENUM(BlueprintType)
enum class ECurveAtlasParameter : uint8 {
    SkySphere_CloudColor,
    SkySphere_HorizonColor = 4,
    SkySphere_ZenithColor = 8,
    AtmosphericFogParametersPack1_SunMultiplier = 12,
    AtmosphericFog_FogMultiplier,
    AtmosphericFog_DensityMultiplier,
    AtmosphericFog_DensityOffset,
    ExponentialFogParameters,
    SkyLightColor = 20,
    Intensity = 24,
    Contrast = 28,
    GetCount,
};

