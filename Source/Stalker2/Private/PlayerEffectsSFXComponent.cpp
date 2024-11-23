#include "PlayerEffectsSFXComponent.h"

UPlayerEffectsSFXComponent::UPlayerEffectsSFXComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SFXStartEvent = NULL;
    this->SFXStopEvent = NULL;
    this->SFXParameter = NULL;
}


