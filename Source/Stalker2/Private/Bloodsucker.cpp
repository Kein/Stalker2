#include "Bloodsucker.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "NiagaraComponent.h"

ABloodsucker::ABloodsucker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InvisibilityTransferParticles = CreateDefaultSubobject<UNiagaraComponent>(TEXT("InvisibilityTransferParticles"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->InvisibilityTransferParticles->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponentBudgeted>(this));
}


