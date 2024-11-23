#include "DialogSpotLightComponent.h"

UDialogSpotLightComponent::UDialogSpotLightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CastShadows = false;
    this->bUseTemperature = true;
}


