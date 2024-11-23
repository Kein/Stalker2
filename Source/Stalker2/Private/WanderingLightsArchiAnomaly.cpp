#include "WanderingLightsArchiAnomaly.h"
#include "Components/BoxComponent.h"

AWanderingLightsArchiAnomaly::AWanderingLightsArchiAnomaly(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAllowTickBeforeBeginPlay = true;
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->PlayerMaxVisibilityDistance = 10000.00f;
    this->bPlayerViewFOVOverride = false;
    this->PlayerViewFOVDeg = 90.00f;
    this->AnomalyStartTime = 22.00f;
    this->AnomalyEndTime = 4.00f;
    this->InstanceVisibilityRadius = 100.00f;
    this->InstanceVisibilityChangeDelay = 1.00f;
    this->InstanceChemicalDamageRadius = 80.00f;
    this->InstanceChemicalDamagePerSecond = 15.00f;
    this->bScaleChemicalDamageFromPenetration = true;
    this->InstanceOpacityChangeSpeed = 2.00f;
    this->bRandomizeInstanceSpawnTime = false;
    this->RandomizedSpawnTimeOffsetMax = 1.00f;
    this->bSkipMovementDuringWakeUp = true;
    this->bSkipMovementDuringShutDown = true;
    this->InstanceSpawnTime = 3.00f;
    this->InstanceBlendTime = 0.50f;
    this->AutoUpdateInstanceData = false;
    this->StretchBoundsWithInstanceData = false;
    this->ShowVFXInEditMode = false;
    this->TargetedStateVFXParametersDelay = 0.00f;
    this->PostProcessBlendRadius = 100.00f;
    this->PostProcessPriority = 100.00f;
    this->BoxComponent = (UBoxComponent*)RootComponent;
}

void AWanderingLightsArchiAnomaly::CreateVFX(bool bEnable) {
}


