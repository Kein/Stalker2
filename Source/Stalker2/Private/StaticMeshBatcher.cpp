#include "StaticMeshBatcher.h"
#include "Components/SceneComponent.h"

AStaticMeshBatcher::AStaticMeshBatcher(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("MeshBatcherRoot"));
}


