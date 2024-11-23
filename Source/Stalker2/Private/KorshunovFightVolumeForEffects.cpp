#include "KorshunovFightVolumeForEffects.h"
#include "NiagaraComponent.h"

AKorshunovFightVolumeForEffects::AKorshunovFightVolumeForEffects(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActiveTime = 3.00f;
    this->VolumeVFX = CreateDefaultSubobject<UNiagaraComponent>(TEXT("VolumeVFX"));
    this->VolumeVFX->SetupAttachment(RootComponent);
}


