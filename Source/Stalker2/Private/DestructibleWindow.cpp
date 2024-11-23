#include "DestructibleWindow.h"
#include "Components/StaticMeshComponent.h"
#include "HittableComponent.h"

ADestructibleWindow::ADestructibleWindow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WindowMesh"));
    this->WindowMesh = (UStaticMeshComponent*)RootComponent;
    this->HittableComponent = CreateDefaultSubobject<UHittableComponent>(TEXT("HittableComponent"));
}


