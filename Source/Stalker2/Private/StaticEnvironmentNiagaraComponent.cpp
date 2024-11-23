#include "StaticEnvironmentNiagaraComponent.h"
#include "NiagaraCommon.h"

UStaticEnvironmentNiagaraComponent::UStaticEnvironmentNiagaraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    const FProperty* p_TickBehavior = GetClass()->FindPropertyByName("TickBehavior");
    (*p_TickBehavior->ContainerPtrToValuePtr<ENiagaraTickBehavior>(this)) = ENiagaraTickBehavior::UseComponentTickGroup;
    this->ParticleType = EStaticParticleType::None;
}


