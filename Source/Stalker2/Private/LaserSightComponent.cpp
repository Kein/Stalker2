#include "LaserSightComponent.h"

ULaserSightComponent::ULaserSightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ParentMesh = NULL;
    this->LaserSightVFX = NULL;
}


