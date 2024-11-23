#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "WeatherParameterNamesDataAsset.generated.h"

UCLASS()
class STALKER2_API UWeatherParameterNamesDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName AtmosphereBrightness;
    
    UPROPERTY(EditAnywhere)
    FName EmissiveBrightness;
    
    UPROPERTY(EditAnywhere)
    FName ZenithColor;
    
    UPROPERTY(EditAnywhere)
    FName HorizonColor;
    
    UPROPERTY(EditAnywhere)
    FName CloudMapBias;
    
    UPROPERTY(EditAnywhere)
    FName CloudMapDensity;
    
    UPROPERTY(EditAnywhere)
    FName NoiseFlowMapAMultiplier;
    
    UPROPERTY(EditAnywhere)
    FName NoiseFlowMapABias;
    
    UPROPERTY(EditAnywhere)
    FName NoiseFlowMapADetail;
    
    UPROPERTY(EditAnywhere)
    FName NoiseFlowMapABottomNoise;
    
    UPROPERTY(EditAnywhere)
    FName NoiseFlowMapBBias;
    
    UPROPERTY(EditAnywhere)
    FName NoiseFlowMapBDetail;
    
    UPROPERTY(EditAnywhere)
    FName NoiseFlowMapBScale;
    
    UPROPERTY(EditAnywhere)
    FName BillowyStormyCloudsHeight;
    
    UPROPERTY(EditAnywhere)
    FName DensityVariationScale;
    
    UPROPERTY(EditAnywhere)
    FName DensityVariationPower;
    
    UPROPERTY(EditAnywhere)
    FName DensityVariationOutFirst;
    
    UPROPERTY(EditAnywhere)
    FName DensityVariationOutSecond;
    
    UPROPERTY(EditAnywhere)
    FName DensityVariationDarkMinDensity;
    
    UPROPERTY(EditAnywhere)
    FName CloudBaseCapMaskRadius;
    
    UPROPERTY(EditAnywhere)
    FName CloudBaseSpeedMultiplier;
    
    UPROPERTY(EditAnywhere)
    FName CloudBaseECX;
    
    UPROPERTY(EditAnywhere)
    FName CloudBasePreExponentialDensity;
    
    UPROPERTY(EditAnywhere)
    FName CloudBaseAlbedo;
    
    UPROPERTY(EditAnywhere)
    FName CloudBaseSecondAlbedo;
    
    UPROPERTY(EditAnywhere)
    FName EmissionParamPositionIntensity;
    
    UPROPERTY(EditAnywhere)
    FName EmissionParamColor;
    
    UPROPERTY(EditAnywhere)
    FName PhaseBlend;
    
    UPROPERTY(EditAnywhere)
    FName PhaseG;
    
    UPROPERTY(EditAnywhere)
    FName PhaseGSecond;
    
    UPROPERTY(EditAnywhere)
    FName MultiScatteringContribution;
    
    UPROPERTY(EditAnywhere)
    FName MultiScatteringOcclusion;
    
    UPROPERTY(EditAnywhere)
    FName MultiScatteringOcclusionPower;
    
    UPROPERTY(EditAnywhere)
    FName MultiScatteringEccentricity;
    
    UPROPERTY(EditAnywhere)
    FName MoonOpacity;
    
    UPROPERTY(EditAnywhere)
    FName MoonLatitude;
    
    UPROPERTY(EditAnywhere)
    FName MoonLongitude;
    
    UPROPERTY(EditAnywhere)
    FName SunShadowAmount;
    
    UPROPERTY(EditAnywhere)
    FName SkyAtmColorPower;
    
    UPROPERTY(EditAnywhere)
    FName WindIntensity;
    
    UPROPERTY(EditAnywhere)
    FName WindDirection;
    
    UPROPERTY(EditAnywhere)
    FName FoliageWindDirection;
    
    UPROPERTY(EditAnywhere)
    FName FoliageWindIntensity;
    
    UPROPERTY(EditAnywhere)
    FName PreviousFoliageWindDirection;
    
    UPROPERTY(EditAnywhere)
    FName PreviousFoliageWindIntensity;
    
    UPROPERTY(EditAnywhere)
    FName RainActivate;
    
    UPROPERTY(EditAnywhere)
    FName TimeOfDay;
    
    UPROPERTY(EditAnywhere)
    FName Wetness;
    
    UPROPERTY(EditAnywhere)
    FName WaterWindNormalMultiplier;
    
    UPROPERTY(EditAnywhere)
    FName RainWindDirection;
    
    UPROPERTY(EditAnywhere)
    FName RainWindStrength;
    
    UPROPERTY(EditAnywhere)
    FName RainSpawnRate;
    
    UPROPERTY(EditAnywhere)
    FName LightningSpawnRate;
    
    UPROPERTY(EditAnywhere)
    FName LightningColor;
    
    UPROPERTY(EditAnywhere)
    FName StormSpawnRate;
    
    UPROPERTY(EditAnywhere)
    FName CloudShift;
    
    UPROPERTY(EditAnywhere)
    FName WaterShift;
    
    UWeatherParameterNamesDataAsset();

};

