#include "DynamicEnvironmentParticleActor.h"
#include "Components/SceneComponent.h"
#include "DynamicEnvironmentNiagaraComponent.h"

ADynamicEnvironmentParticleActor::ADynamicEnvironmentParticleActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    this->EnvironmentParticleComponent = CreateDefaultSubobject<UDynamicEnvironmentNiagaraComponent>(TEXT("DynamicParticleComponent"));
    this->EnvironmentParticleComponent->SetupAttachment(RootComponent);
}


