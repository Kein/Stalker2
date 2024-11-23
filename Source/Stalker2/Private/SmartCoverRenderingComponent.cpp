#include "SmartCoverRenderingComponent.h"

USmartCoverRenderingComponent::USmartCoverRenderingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnly = true;
    this->bSelectable = false;
}


