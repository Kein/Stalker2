#include "DestructabilityMetaInfoComponent.h"

UDestructabilityMetaInfoComponent::UDestructabilityMetaInfoComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnly = true;
    this->bAllowConvertionToDestructibleObject = true;
}


