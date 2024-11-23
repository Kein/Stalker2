#include "PassiveDetectorComponent.h"

UPassiveDetectorComponent::UPassiveDetectorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DangerLevelSoundParameter = NULL;
    this->DetectorWorkSFX = NULL;
    this->DetectorWorkCurve = NULL;
    this->SignalCurve = NULL;
}


