#include "InputDamageModifierComponent.h"

UInputDamageModifierComponent::UInputDamageModifierComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DamageModifier = 1.00f;
}

void UInputDamageModifierComponent::SetIgnoreHitFeedback(const bool bInIgnore) {
}


