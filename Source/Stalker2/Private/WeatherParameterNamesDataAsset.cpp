#include "WeatherParameterNamesDataAsset.h"

UWeatherParameterNamesDataAsset::UWeatherParameterNamesDataAsset() {
    this->AtmosphereBrightness = TEXT("Atmosphere_brightness");
    this->EmissiveBrightness = TEXT("SkyLight_(ntensity");
    this->ZenithColor = TEXT("Zenith Color");
    this->HorizonColor = TEXT("Horizon color");
    this->CloudMapBias = TEXT("Bias");
    this->CloudMapDensity = TEXT("Density");
    this->NoiseFlowMapAMultiplier = TEXT("NoiseMultiplier (influence both flowmap after add)");
    this->NoiseFlowMapABias = TEXT("FlowMap 1Bias");
    this->NoiseFlowMapADetail = TEXT("Detail");
    this->NoiseFlowMapABottomNoise = TEXT("Bottom Noise");
    this->NoiseFlowMapBBias = TEXT("FlowMap 2Bias");
    this->NoiseFlowMapBDetail = TEXT("Detail 2");
    this->NoiseFlowMapBScale = TEXT("Scale2");
    this->BillowyStormyCloudsHeight = TEXT("Cloud 1 Height (BC)");
    this->DensityVariationScale = TEXT("Density Variation scale");
    this->DensityVariationPower = TEXT("Param_1 (Power)");
    this->DensityVariationOutFirst = TEXT("OutD");
    this->DensityVariationOutSecond = TEXT("OutD2");
    this->DensityVariationDarkMinDensity = TEXT("Dark Min Density");
    this->CloudBaseCapMaskRadius = TEXT("CapMaskRadius");
    this->CloudBaseSpeedMultiplier = TEXT("Cloud_Speed_Multiplier");
    this->CloudBaseECX = TEXT("ecx");
    this->CloudBasePreExponentialDensity = TEXT("Pre Exponential Density");
    this->CloudBaseAlbedo = TEXT("Albedo");
    this->CloudBaseSecondAlbedo = TEXT("2nd Cloud Albedo");
    this->EmissionParamPositionIntensity = TEXT("EM_PositionIntensity");
    this->EmissionParamColor = TEXT("Em_Color");
    this->PhaseBlend = TEXT("Phasey Blend");
    this->PhaseG = TEXT("Phase G");
    this->PhaseGSecond = TEXT("Phase G2");
    this->MultiScatteringContribution = TEXT("MultiScatteringContribution");
    this->MultiScatteringOcclusion = TEXT("MultiScattering Occlusion");
    this->MultiScatteringOcclusionPower = TEXT("Powertest (mult for  MultiScattering Occlusion)");
    this->MultiScatteringEccentricity = TEXT("MultiScatteringEccentricity");
    this->MoonOpacity = TEXT("LIGHT_MoonOpacity");
    this->MoonLatitude = TEXT("LIGHT_MoonLatitude");
    this->MoonLongitude = TEXT("LIGHT_MoonLongitude");
    this->SunShadowAmount = TEXT("LIGHT_SunShadowAmount");
    this->SkyAtmColorPower = TEXT("LIGHT_SkyAtmColorPower");
    this->WindIntensity = TEXT("WIND_WindIntensity");
    this->WindDirection = TEXT("WIND_WindDirection");
    this->FoliageWindDirection = TEXT("WIND_FoliageWindDirection");
    this->FoliageWindIntensity = TEXT("WIND_FoliageWindIntensity");
    this->PreviousFoliageWindDirection = TEXT("WIND_PreviousFoliageWindDirection");
    this->PreviousFoliageWindIntensity = TEXT("WIND_PreviousFoliageWindIntensity");
    this->RainActivate = TEXT("RAIN-Rain_Activate");
    this->TimeOfDay = TEXT("WEATHER_TimeOfDay");
    this->Wetness = TEXT("WETNESS-Activate");
    this->WaterWindNormalMultiplier = TEXT("WIND_WaterWindNormalMultiplier");
    this->RainWindDirection = TEXT("WindDirection");
    this->RainWindStrength = TEXT("WindStrength");
    this->RainSpawnRate = TEXT("WeatherRainSpawnRate");
    this->LightningSpawnRate = TEXT("WeatherLightningSpawnRate");
    this->LightningColor = TEXT("Color");
    this->StormSpawnRate = TEXT("WeatherStormSpawnRate");
    this->CloudShift = TEXT("CLOUD_finalShift");
    this->WaterShift = TEXT("WATER_finalShift");
}


