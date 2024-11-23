#include "TopazSingleClickComponent.h"

UTopazSingleClickComponent::UTopazSingleClickComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRightHandBusy = true;
    this->InteractionAngle = 30.00f;
    this->ActivationAnimCollection = NULL;
    this->CollectAnimCollection = NULL;
    this->bCustomInteractText = false;
    this->OwnerScanner = NULL;
}


