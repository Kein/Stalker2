#include "SimpleVolumeForEffects.h"
#include "ApplyEffectComponent.h"

ASimpleVolumeForEffects::ASimpleVolumeForEffects(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EffectComponent = CreateDefaultSubobject<UApplyEffectComponent>(TEXT("EffectComponent"));
    this->bRemoveEffectOnEndOverlap = true;
}


