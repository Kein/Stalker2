#include "PhysicsInteractionComponent.h"

UPhysicsInteractionComponent::UPhysicsInteractionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bLoadDefaultPrototypeOnBeginPlay = true;
    this->bCreateWaterContactController = true;
    this->bCreateWetnessComponent = true;
    this->WaterContactNiagaraSystemVFX = NULL;
}


