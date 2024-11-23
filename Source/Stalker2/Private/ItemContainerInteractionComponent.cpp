#include "ItemContainerInteractionComponent.h"

UItemContainerInteractionComponent::UItemContainerInteractionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PresetItemContainerPrototypeID = 0;
    this->StashTypeSwitch = NULL;
    this->OpenAudioEvent = NULL;
    this->CloseAudioEvent = NULL;
    this->InteractedActor = NULL;
}


