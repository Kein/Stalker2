#include "GSCNavModifierComponent.h"

UGSCNavModifierComponent::UGSCNavModifierComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnabled = false;
    this->TargetAreaClass = NULL;
}

void UGSCNavModifierComponent::SetEnabled(bool bNewEnabled) {
}

void UGSCNavModifierComponent::RequestBoundsRecalculation() {
}

void UGSCNavModifierComponent::RemoveSelectedComponent(UPrimitiveComponent* PrimitiveComponent) {
}

void UGSCNavModifierComponent::ClearSelectedComponents() {
}

void UGSCNavModifierComponent::AddSelectedComponent(UPrimitiveComponent* PrimitiveComponent) {
}


