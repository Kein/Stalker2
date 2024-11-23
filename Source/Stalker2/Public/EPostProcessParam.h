#pragma once
#include "CoreMinimal.h"
#include "EPostProcessParam.generated.h"

UENUM(BlueprintType)
enum class EPostProcessParam : uint8 {
    Anomaly,
    RadiationNoise,
    RadiationSepia,
    PoppyField,
    SleepinessVignette,
    DamageBloodIntensity,
    BloodTopMaskIntensity,
    BloodRightMaskIntensity,
    BloodBottomMaskIntensity,
    BloodLeftMaskIntensity,
    PulsationIntensityMin,
    PulsationIntensityMax,
    LeakingBloodIntensity,
    LeakingBloodPulsationIntensityMin,
    LeakingBloodPulsationIntensityMax,
    RainIntensity,
    GaussianBlur,
    PsyFieldSepia,
    ChemicalIntensity,
    ExpulsionCompletion,
    CarouselIntensity,
    BurnIntensity,
    DrunknessIntensity,
    SuppressionGaussianBlur,
    GetCount,
};

