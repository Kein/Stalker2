#include "HeadFlashlightComponent.h"

UHeadFlashlightComponent::UHeadFlashlightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FlashlightTurnOnAudioEvent = NULL;
    this->FlashlightTurnOffAudioEvent = NULL;
    this->FlashlightBurnOutAudioEvent = NULL;
}


