#pragma once
#include "CoreMinimal.h"
#include "DirectionalLightState.h"
#include "EWeather.h"
#include "ExponentialHeightFogState.h"
#include "FloatParameter.h"
#include "PostProcessState.h"
#include "RainState.h"
#include "SkyAtmosphereState.h"
#include "SkyLightState.h"
#include "SkySphereState.h"
#include "VolumetricCloudState.h"
#include "WeatherState.generated.h"

USTRUCT(BlueprintType)
struct FWeatherState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSkySphereState SkySphere;
    
    UPROPERTY(EditAnywhere)
    FDirectionalLightState DirLight;
    
    UPROPERTY(EditAnywhere)
    FSkyLightState SkyLight;
    
    UPROPERTY(EditAnywhere)
    FSkyAtmosphereState SkyAtmosphere;
    
    UPROPERTY(EditAnywhere)
    FVolumetricCloudState VolumetricCloud;
    
    UPROPERTY(EditAnywhere)
    FExponentialHeightFogState ExponentialHeightFog;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter GlobalVolumetricValue;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter LocalVolumetricValue;
    
    UPROPERTY(EditAnywhere)
    FRainState Rain;
    
    UPROPERTY(EditAnywhere)
    FPostProcessState PostProcess;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter WindIntensity;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter WaterWindNormalMultiplier;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter WaterWindBaseSpeedMultiplier;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter FoliageAnimationSpeed;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter FoliageWindIntensityAmplitude;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter FoliageRotationAmount;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter FoliageRotationSpeedFraction;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter FoliageVariationSpeedFraction;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter FoliageVariationAmount;
    
    UPROPERTY(EditAnywhere)
    TMap<EWeather, float> TransitionDurations;
    
    STALKER2_API FWeatherState();
};

