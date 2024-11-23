#include "SelectionVolumeBox.h"
#include "Components/BoxComponent.h"

ASelectionVolumeBox::ASelectionVolumeBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComp"));
    this->CollisionComponent = (UShapeComponent*)RootComponent;
}


