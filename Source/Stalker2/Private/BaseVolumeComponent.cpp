#include "BaseVolumeComponent.h"

UBaseVolumeComponent::UBaseVolumeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHiddenInGame = true;
    this->MeshType = ECollisionFormType::None;
    this->bBlockNegativeScale = false;
    this->bForceRoundCylinderBase = false;
    this->bForceUniformSphereScale = false;
}


