#include "DealDamageComponent.h"

UDealDamageComponent::UDealDamageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Damage = 0.00f;
    this->ArmorDamage = 0.00f;
    this->ArmorPiercing = 0.00f;
    this->DamageType = EDamageType::None;
    this->DamageSource = EDamageSource::None;
}

void UDealDamageComponent::DealDamage(const AActor* InTargetActor) const {
}


