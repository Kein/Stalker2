#include "Lever.h"

ULever::ULever(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentValue = 0.00f;
    this->bShouldConsumeItemOnOpen = false;
    this->bUseInBothSides = false;
    this->LeverHandleMesh = NULL;
    this->LeverCurve = NULL;
    this->LeverCurveReverse = NULL;
}

void ULever::ChangeLeverPosition() {
}


