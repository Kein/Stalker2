#include "TopazScannerComponent.h"

UTopazScannerComponent::UTopazScannerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InitialState = ETopazScannerState::Inactive;
    this->ScanningTime = 10.00f;
}

float UTopazScannerComponent::GetStateStartTimestamp() const {
    return 0.0f;
}

ETopazScannerState UTopazScannerComponent::GetCurrentState() const {
    return ETopazScannerState::None;
}

void UTopazScannerComponent::ChangeState() {
}


