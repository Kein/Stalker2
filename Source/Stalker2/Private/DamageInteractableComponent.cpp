#include "DamageInteractableComponent.h"

UDamageInteractableComponent::UDamageInteractableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InteractionDamageThreshold = 100.00f;
    this->bOnlyPlayerDamage = true;
}


