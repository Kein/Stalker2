#include "CodeComponent.h"

UCodeComponent::UCodeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaximumCodeLength = 4;
}

void UCodeComponent::ResetCode() {
}


