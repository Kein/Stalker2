#include "AnomalyModelSpawner.h"
#include "Components/SceneComponent.h"

AAnomalyModelSpawner::AAnomalyModelSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->bSpawnOnBeginPlay = false;
}


