#include "InteractionComponent.h"

UInteractionComponent::UInteractionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsInteractionActive = true;
    this->bShouldReleaseTargetOnInteraction = true;
    this->bRightHandBusy = false;
    this->bLeftHandBusy = true;
    this->bIsConeInteraction = false;
    this->bShowInactive = false;
    this->bSelfActivating = true;
    this->MinInteractionRadius = 50.00f;
    this->MaxInteractionRadius = 200.00f;
    this->InteractionHeight = 70.00f;
    this->InteractionPointHeightOffset = 0.00f;
    this->ConeHeight = 200.00f;
    this->ConeAngle = 90.00f;
    this->InteractableAnimCollection = NULL;
    this->bShowInteractionDot = true;
}

void UInteractionComponent::SetShowInactive(const bool bShow) {
}

void UInteractionComponent::SetSelfActivating(const bool bNewValue) {
}

void UInteractionComponent::SetInteractionDistance(const float MinDistance, const float MaxDistance) {
}

void UInteractionComponent::SetInteractionActive(const bool bActive) {
}

bool UInteractionComponent::HasRelatedQuest() const {
    return false;
}

bool UInteractionComponent::HasItemRequirement() const {
    return false;
}


