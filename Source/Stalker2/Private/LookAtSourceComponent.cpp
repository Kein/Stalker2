#include "LookAtSourceComponent.h"

ULookAtSourceComponent::ULookAtSourceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Target = NULL;
    this->bIsEnabled = false;
    this->bUseDefaultSetting = true;
}


