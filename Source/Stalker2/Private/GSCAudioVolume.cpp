#include "GSCAudioVolume.h"
#include "AudioRoomBakedReflectionComponent.h"
#include "AudioRoomBandwidthComponent.h"

AGSCAudioVolume::AGSCAudioVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BakedReflection = CreateDefaultSubobject<UAudioRoomBakedReflectionComponent>(TEXT("BakedReflection"));
    this->Bandwidth = CreateDefaultSubobject<UAudioRoomBandwidthComponent>(TEXT("Bandwidth"));
    this->FadeTransitionDuration = 0;
    this->FadeCurveType = EAkCurveInterpolation::Linear;
    this->bEnableCrowdedAmbient = false;
    this->CrowdedAmbientAudioEvent = NULL;
    this->AudioRoomPresetBase = EAudioRoomPresetBase::Custom;
    this->AudioRoomPresetBandwidth = EAudioRoomPresetBandwidth::Custom;
    this->AudioVolumeCollisionChannel = ECC_GameTraceChannel14;
    this->InfoTextRenderComponent = NULL;
    this->BlendRadius = 1.00f;
    this->BlendWeight = 1.00f;
    this->Priority = 100000.00f;
    this->bOverride_LumenSkylightLeaking = true;
    this->SkyLightLeakingAmount = 0.00f;
}


