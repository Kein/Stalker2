#include "DeadBody.h"

UDeadBody::UDeadBody(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsInteractionActive = false;
    this->bRightHandBusy = true;
}

AObj* UDeadBody::GetInteractedActor() {
    return NULL;
}


