#include "ToggleButton.h"

UToggleButton::UToggleButton(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentValue = 0.00f;
    this->bShouldConsumeItemOnOpen = false;
    this->bUseInBothSides = false;
    this->ToggleButtonHandleMesh = NULL;
    this->ToggleButtonCurve = NULL;
    this->ToggleButtonCurveReverse = NULL;
}

void UToggleButton::ChangeToggleButtonPosition() {
}


