#include "EditorItemContainer.h"

AEditorItemContainer::AEditorItemContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ItemContainerType = EMeshSubType::Static;
}


