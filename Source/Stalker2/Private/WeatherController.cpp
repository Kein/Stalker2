#include "WeatherController.h"
#include "Components/DirectionalLightComponent.h"
#include "Components/ExponentialHeightFogComponent.h"
#include "Components/PostProcessComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkyAtmosphereComponent.h"
#include "Components/SkyLightComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/VolumetricCloudComponent.h"
#include "NiagaraComponent.h"

AWeatherController::AWeatherController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
    this->CurrentRainIntensity = 0.00f;
    this->CurrentWetnessState = 0.00f;
    this->DefaultRoot = (USceneComponent*)RootComponent;
    this->SkySphere = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SkySphere"));
    this->SkySphereMID = NULL;
    this->Sun = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("Sun"));
    this->SkyLight = CreateDefaultSubobject<USkyLightComponent>(TEXT("SkyLight"));
    this->SkyAtmosphere = CreateDefaultSubobject<USkyAtmosphereComponent>(TEXT("SkyAtmosphere"));
    this->VolumetricCloud = CreateDefaultSubobject<UVolumetricCloudComponent>(TEXT("VolumetricCloud"));
    this->CloudsMID = NULL;
    this->ExponentialHeightFog = CreateDefaultSubobject<UExponentialHeightFogComponent>(TEXT("ExponentialHeightFog"));
    this->SunPositionCurve = NULL;
    this->GlobalVolumetricValue = 0.00f;
    this->LocalVolumetricValue = 0.00f;
    this->Rain = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Rain"));
    this->PostProcess = CreateDefaultSubobject<UPostProcessComponent>(TEXT("PostProcess"));
    this->EnvironmentMPC = NULL;
    this->EnvironmentMPCInstance = NULL;
    this->WetnessSoundParameter = NULL;
    this->WindIntensitySoundParameter = NULL;
    this->WeatherSound = NULL;
    this->RainIntensitySoundParameter = NULL;
    this->DaytimeSoundParameter = NULL;
    this->RazorWeatherFeedbackRTPC = NULL;
    this->WeatherParameterNamesDataAsset = NULL;
    this->WeatherPresets.AddDefaulted(9);
    this->VolumetricCloudMaterial = NULL;
    this->SkySphereMaterial = NULL;
    this->RemoveKeyTolerance = 0.00f;
    this->SolarTime = 12.00f;
    this->CurrentWeatherDuration = 0.00f;
    this->RequestedWeatherDuration = 0.00f;
    this->TransitionDuration = 0.00f;
    this->WeatherTransitionTimeMultiplier = 1.00f;
    this->WeatherChangeSpeed = 1.00f;
    this->SourceWeather = EWeather::Clearly;
    this->TargetWeather = EWeather::Clearly;
    this->SkySphereEmissive = 0.00f;
    this->StartSunRiseTime = 4.50f;
    this->EndSunRiseTime = 5.50f;
    this->StartSunSetTime = 20.50f;
    this->EndSunSetTime = 21.50f;
    this->ShadowStepDaylight = 0.08f;
    this->ShadowStepMoonlight = 0.14f;
    this->SimulationSpeed = 100.00f;
    this->SimulationDuration = 10.00f;
    this->CurrentSimulationDuration = 0.00f;
    this->WindIntensity = 0.00f;
    this->WaterWindNormalMultiplier = 0.00f;
    this->WaterShift = 0.00f;
    this->CloudShiftStep = 0.00f;
    this->WindDirectionChangeDelay = 120.00f;
    this->EmissionWindDirectionChangeDelay = 1.00f;
    this->WindDirectionChangeMinAngle = 10.00f;
    this->WindDirectionChangeMaxAngle = 30.00f;
    this->ShadowAmount = 0.00f;
    this->MoonOpacity = 0.00f;
    this->ColorPower = 0.00f;
    this->SourcePreset = NULL;
    this->TargetPreset = NULL;
    this->ExponentialHeightFog->SetupAttachment(RootComponent);
    this->Rain->SetupAttachment(RootComponent);
    this->PostProcess->SetupAttachment(RootComponent);
    this->SkySphere->SetupAttachment(RootComponent);
    this->Sun->SetupAttachment(RootComponent);
    this->SkyLight->SetupAttachment(RootComponent);
    this->SkyAtmosphere->SetupAttachment(RootComponent);
    this->VolumetricCloud->SetupAttachment(RootComponent);
}


