#include "GSCNavModifierVolume.h"
#include "GuidActorComponent.h"

AGSCNavModifierVolume::AGSCNavModifierVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GuidComponent = CreateDefaultSubobject<UGuidActorComponent>(TEXT("Guid component"));
    this->bIsActive = false;
}


