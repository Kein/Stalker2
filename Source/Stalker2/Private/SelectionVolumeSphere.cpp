#include "SelectionVolumeSphere.h"
#include "Components/SphereComponent.h"

ASelectionVolumeSphere::ASelectionVolumeSphere(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComp"));
    this->CollisionComponent = (UShapeComponent*)RootComponent;
}


