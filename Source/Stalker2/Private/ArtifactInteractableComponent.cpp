#include "ArtifactInteractableComponent.h"

UArtifactInteractableComponent::UArtifactInteractableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShouldReleaseTargetOnInteraction = false;
    this->bRightHandBusy = true;
    this->bLeftHandBusy = false;
}


