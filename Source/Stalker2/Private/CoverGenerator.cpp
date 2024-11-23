#include "CoverGenerator.h"
#include "Components/SceneComponent.h"

ACoverGenerator::ACoverGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->DebugRenderingComp = NULL;
}


