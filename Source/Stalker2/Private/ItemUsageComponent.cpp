#include "ItemUsageComponent.h"

UItemUsageComponent::UItemUsageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UItemUsageComponent::RemoveAffectedComponent(UInteractionComponent* InteractionComponent) {
}

bool UItemUsageComponent::HasRequiredItems() const {
    return false;
}

bool UItemUsageComponent::HasAnyItemNeededToInteract() const {
    return false;
}

void UItemUsageComponent::ConsumeRequiredItems() {
}

void UItemUsageComponent::AddAffectedComponent(UInteractionComponent* InteractionComponent) {
}


