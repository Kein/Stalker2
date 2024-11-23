#include "ApplyEffectComponent.h"

UApplyEffectComponent::UApplyEffectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanUseStackableEffects = true;
}

void UApplyEffectComponent::RemoveEffects() {
}

void UApplyEffectComponent::ApplyEffects() {
}


