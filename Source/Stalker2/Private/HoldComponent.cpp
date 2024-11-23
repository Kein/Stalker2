#include "HoldComponent.h"

UHoldComponent::UHoldComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UHoldComponent::IsHoldStarted() const {
    return false;
}


