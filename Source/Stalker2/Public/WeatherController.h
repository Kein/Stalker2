#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GSCCustomActorValidatorInterface -FallbackName=GSCCustomActorValidatorInterface
#include "EWeather.h"
#include "PrototypeSID.h"
#include "WeatherHistoryData.h"
#include "Wind.h"
#include "WeatherController.generated.h"

class UAkAudioEvent;
class UAkRtpc;
class UCurveLinearColor;
class UDirectionalLightComponent;
class UExponentialHeightFogComponent;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UMaterialParameterCollection;
class UMaterialParameterCollectionInstance;
class UNiagaraComponent;
class UPostProcessComponent;
class USceneComponent;
class USkyAtmosphereComponent;
class USkyLightComponent;
class UStaticMeshComponent;
class UVolumetricCloudComponent;
class UWeatherParameterNamesDataAsset;
class UWeatherPresetDataAsset;

UCLASS(Abstract) // FIXME custom module
class STALKER2_API AWeatherController : public AActor { //, public IGSCCustomActorValidatorInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    float CurrentRainIntensity;
    
    UPROPERTY(VisibleAnywhere)
    float CurrentWetnessState;
    
public:
    UPROPERTY(EditDefaultsOnly, Instanced)
    USceneComponent* DefaultRoot;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UStaticMeshComponent* SkySphere;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* SkySphereMID;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UDirectionalLightComponent* Sun;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    USkyLightComponent* SkyLight;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    USkyAtmosphereComponent* SkyAtmosphere;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UVolumetricCloudComponent* VolumetricCloud;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* CloudsMID;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UExponentialHeightFogComponent* ExponentialHeightFog;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveLinearColor* SunPositionCurve;
    
    UPROPERTY(EditDefaultsOnly)
    float GlobalVolumetricValue;
    
    UPROPERTY(EditDefaultsOnly)
    float LocalVolumetricValue;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UNiagaraComponent* Rain;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UPostProcessComponent* PostProcess;
    
    UPROPERTY(EditDefaultsOnly)
    UMaterialParameterCollection* EnvironmentMPC;
    
    UPROPERTY(Transient)
    UMaterialParameterCollectionInstance* EnvironmentMPCInstance;
    
    UPROPERTY(EditDefaultsOnly)
    UAkRtpc* WetnessSoundParameter;
    
    UPROPERTY(EditDefaultsOnly)
    UAkRtpc* WindIntensitySoundParameter;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* WeatherSound;
    
    UPROPERTY(EditDefaultsOnly)
    UAkRtpc* RainIntensitySoundParameter;
    
    UPROPERTY(EditDefaultsOnly)
    UAkRtpc* DaytimeSoundParameter;
    
    UPROPERTY(EditDefaultsOnly)
    UAkRtpc* RazorWeatherFeedbackRTPC;
    
    UPROPERTY(EditDefaultsOnly)
    UWeatherParameterNamesDataAsset* WeatherParameterNamesDataAsset;
    
    UPROPERTY(EditFixedSize, VisibleAnywhere)
    TArray<TSoftObjectPtr<UWeatherPresetDataAsset>> WeatherPresets;
    
    UPROPERTY(EditDefaultsOnly)
    UMaterialInterface* VolumetricCloudMaterial;
    
    UPROPERTY(EditDefaultsOnly)
    UMaterialInterface* SkySphereMaterial;
    
    UPROPERTY(EditAnywhere)
    float RemoveKeyTolerance;
    
    UPROPERTY(EditAnywhere)
    float SolarTime;
    
    UPROPERTY(VisibleAnywhere)
    float CurrentWeatherDuration;
    
    UPROPERTY(VisibleAnywhere)
    float RequestedWeatherDuration;
    
    UPROPERTY(VisibleAnywhere)
    float TransitionDuration;
    
    UPROPERTY(VisibleAnywhere)
    float WeatherTransitionTimeMultiplier;
    
    UPROPERTY(VisibleAnywhere)
    float WeatherChangeSpeed;
    
    UPROPERTY(EditAnywhere)
    EWeather SourceWeather;
    
    UPROPERTY(EditAnywhere)
    EWeather TargetWeather;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FWeatherHistoryData> WeatherHistory;
    
    UPROPERTY(EditAnywhere)
    float SkySphereEmissive;
    
    UPROPERTY(EditAnywhere)
    FLinearColor SkySphereZenithColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor SkySphereHorizonColor;
    
    UPROPERTY(EditAnywhere)
    float StartSunRiseTime;
    
    UPROPERTY(EditAnywhere)
    float EndSunRiseTime;
    
    UPROPERTY(EditAnywhere)
    float StartSunSetTime;
    
    UPROPERTY(EditAnywhere)
    float EndSunSetTime;
    
    UPROPERTY(EditAnywhere)
    float ShadowStepDaylight;
    
    UPROPERTY(EditAnywhere)
    float ShadowStepMoonlight;
    
    UPROPERTY(EditAnywhere)
    float SimulationSpeed;
    
    UPROPERTY(EditAnywhere)
    float SimulationDuration;
    
    UPROPERTY(EditAnywhere)
    float CurrentSimulationDuration;
    
    UPROPERTY(EditAnywhere)
    FPrototypeSID SelectionPrototypeSID;
    
    UPROPERTY(EditAnywhere)
    float WindIntensity;
    
    UPROPERTY(EditAnywhere)
    float WaterWindNormalMultiplier;
    
    UPROPERTY(VisibleAnywhere)
    FVector2D CloudShift;
    
    UPROPERTY(VisibleAnywhere)
    float WaterShift;
    
    UPROPERTY(EditDefaultsOnly)
    float CloudShiftStep;
    
    UPROPERTY(EditAnywhere)
    float WindDirectionChangeDelay;
    
    UPROPERTY(EditAnywhere)
    float EmissionWindDirectionChangeDelay;
    
    UPROPERTY(EditAnywhere)
    float WindDirectionChangeMinAngle;
    
    UPROPERTY(EditAnywhere)
    float WindDirectionChangeMaxAngle;
    
    UPROPERTY(EditAnywhere)
    float ShadowAmount;
    
    UPROPERTY(EditAnywhere)
    float MoonOpacity;
    
    UPROPERTY(EditAnywhere)
    float ColorPower;
    
    UPROPERTY(VisibleAnywhere)
    UWeatherPresetDataAsset* SourcePreset;
    
    UPROPERTY(VisibleAnywhere)
    UWeatherPresetDataAsset* TargetPreset;
    
private:
    UPROPERTY(EditAnywhere)
    FWind Wind;
    
public:
    AWeatherController(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

