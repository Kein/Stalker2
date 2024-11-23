#pragma once
#include "CoreMinimal.h"
#include "EScalabilitySetting.generated.h"

UENUM(BlueprintType)
enum class EScalabilitySetting : uint8 {
    ResolutionQuality,
    ViewDistanceQuality,
    AntiAliasingQuality,
    ShadowQuality,
    GlobalIlluminationQuality,
    ReflectionQuality,
    PostProcessQuality,
    TextureQuality,
    EffectsQuality,
    FoliageQuality,
    ShadingQuality,
    HairQuality,
    ObjectDetailQuality,
    VolumetricFogQuality,
    VolumetricCloudsQuality,
    SkyQuality,
    MaterialQuality,
    MotionBlurQuality,
    DOFQuality,
    GetCount,
};

