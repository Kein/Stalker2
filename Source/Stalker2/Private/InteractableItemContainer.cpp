#include "InteractableItemContainer.h"
#include "ItemContainerInteractionComponent.h"
#include "PhysicsInteractionComponent.h"
#include "PhysicsSoundsComponent.h"

AInteractableItemContainer::AInteractableItemContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PhysicsSoundsComponent = CreateDefaultSubobject<UPhysicsSoundsComponent>(TEXT("PhysicsSoundsComponent"));
    this->PhysicsInteractionComponent = CreateDefaultSubobject<UPhysicsInteractionComponent>(TEXT("PhysicsInteractionComponent"));
    this->HittableComponent = NULL;
    this->LaserSightComponent = NULL;
    this->DataLayerPhysicsComponent = NULL;
    this->InteractionComponent = CreateDefaultSubobject<UItemContainerInteractionComponent>(TEXT("InteractionComponent"));
}

void AInteractableItemContainer::OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}


