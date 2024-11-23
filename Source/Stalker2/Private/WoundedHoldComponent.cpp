#include "WoundedHoldComponent.h"

UWoundedHoldComponent::UWoundedHoldComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InteractionSocketName = TEXT("InteractionPointSocket");
    this->bShouldReleaseTargetOnInteraction = false;
}


