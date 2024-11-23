#include "StrandGenerator.h"
#include "Components/SplineComponent.h"

AStrandGenerator::AStrandGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Spline = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->bUseStartSeparator = true;
    this->bUseStopSeparator = true;
    this->bUseAutoAdjusting = true;
    this->bOnlyRightAngle = true;
}

FStrandFinalData AStrandGenerator::GetFinalStrandData() {
    return FStrandFinalData{};
}


