#include "GameGraphData.h"
#include "Components/SceneComponent.h"

AGameGraphData::AGameGraphData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->DebugRenderingComp = NULL;
}


