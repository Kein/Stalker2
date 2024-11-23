#include "PsyNPCComponent.h"

UPsyNPCComponent::UPsyNPCComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DissolveCurve = NULL;
    this->GroomCurve = NULL;
    this->DissolveTime = 0.00f;
}


