#include "FlashlightComponent.h"

UFlashlightComponent::UFlashlightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MainMeshComponent = NULL;
    this->FakeLightBeamComponent = NULL;
    this->SpotLightComponent = NULL;
    this->ExtraSpotLightComponent = NULL;
    this->TopAttachmentComponent = NULL;
    this->ParentMeshComponent = NULL;
    this->InnerRadiusCurve = NULL;
    this->OuterRadiusCurve = NULL;
}


