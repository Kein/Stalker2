#include "AttackComponent.h"

UAttackComponent::UAttackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActiveState = EAttackActionType::None;
}


