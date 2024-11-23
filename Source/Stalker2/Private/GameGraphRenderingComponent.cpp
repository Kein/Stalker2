#include "GameGraphRenderingComponent.h"

UGameGraphRenderingComponent::UGameGraphRenderingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnly = true;
    this->bSelectable = false;
    this->ShowComponentId = 4294967295;
    this->GameGraphMaterial = NULL;
}

void UGameGraphRenderingComponent::ShowAllComponents() {
}


