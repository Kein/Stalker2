#include "LockableComponent.h"

ULockableComponent::ULockableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bLocked = false;
}


