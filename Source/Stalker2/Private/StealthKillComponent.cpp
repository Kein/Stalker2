#include "StealthKillComponent.h"

UStealthKillComponent::UStealthKillComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwnerPlayer = NULL;
    this->StealthKillSnapCurve = NULL;
}


