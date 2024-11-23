#include "PlayerStash.h"
#include "Components/SkeletalMeshComponent.h"
#include "AnimatedItemContainerInteractionComponent.h"

APlayerStash::APlayerStash(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"))) {
    this->SkeletalMeshComponent = (USkeletalMeshComponent*)RootComponent;
    this->InteractionComponent = CreateDefaultSubobject<UAnimatedItemContainerInteractionComponent>(TEXT("InteractionComponent"));
}


