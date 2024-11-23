#include "DiamondAnomalyAffectedItemComponent.h"

UDiamondAnomalyAffectedItemComponent::UDiamondAnomalyAffectedItemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnly = true;
    this->DiamondParticle = NULL;
    this->OverridePhysicalMaterial = NULL;
    this->DiamondAuxFilter = NULL;
    this->DiamondAuxComponent = NULL;
    this->DiamondFilterBounds = NULL;
}


