#include "AnimatedItemContainerInteractionComponent.h"

UAnimatedItemContainerInteractionComponent::UAnimatedItemContainerInteractionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShouldReleaseTargetOnInteraction = false;
    this->bRightHandBusy = true;
}


