#include "TriplanarDecalComponent.h"

UTriplanarDecalComponent::UTriplanarDecalComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NumberOfTraces = 64;
    this->HeightMap = NULL;
}


