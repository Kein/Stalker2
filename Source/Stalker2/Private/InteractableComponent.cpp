#include "InteractableComponent.h"

UInteractableComponent::UInteractableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnabled = true;
    this->TriggerUserData = 0;
    this->TriggerAlternativeUserData = 0;
    //this->InteractionType = EInteractionType::SingleClick;
    this->DisplayPriority = EDisplayPriority::Medium;
    this->InteractionProgressDurationTime = 1.00f;
    this->InteractionProgressIncreasingSpeed = 1.00f;
    this->InteractionProgressFillTimeInSeconds = 0.00f;
    this->bTickableInteractable = false;
    this->bInteractableWithDeadBody = false;
    this->CurrentInteractingActor = NULL;
}

void UInteractableComponent::SetEnabled(const bool bInEnabled) {
}

void UInteractableComponent::SetDisplayPriority(const EDisplayPriority& NewPriority) {
}

bool UInteractableComponent::GetPreventDefaultInteract() const {
    return false;
}

//EInteractionType UInteractableComponent::GetInteractionType() const { return EInteractionType::None; }

EDisplayPriority UInteractableComponent::GetDisplayPriority() const {
    return EDisplayPriority::None;
}


