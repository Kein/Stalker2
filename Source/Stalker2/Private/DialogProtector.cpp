#include "DialogProtector.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "GSCNavModifierComponent.h"

ADialogProtector::ADialogProtector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultRootComponent"));
    this->SpaceRestrictor = CreateDefaultSubobject<UGSCNavModifierComponent>(TEXT("SpaceRestrictor"));
    this->SpaceRestrictorShape = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->SpaceRestrictorShape->SetupAttachment(RootComponent);
}


