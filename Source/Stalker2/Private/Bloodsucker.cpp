#include "Bloodsucker.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "NiagaraComponent.h"

ABloodsucker::ABloodsucker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InvisibilityTransferParticles = CreateDefaultSubobject<UNiagaraComponent>(TEXT("InvisibilityTransferParticles"));
    this->InvisibilityTransferParticles->SetupAttachment(RootComponent);
}


