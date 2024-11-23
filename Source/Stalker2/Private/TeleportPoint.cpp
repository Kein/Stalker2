#include "TeleportPoint.h"
#include "Components/SceneComponent.h"

ATeleportPoint::ATeleportPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
    this->SpriteComponent = NULL;
    this->ArrowComponent = NULL;
}


