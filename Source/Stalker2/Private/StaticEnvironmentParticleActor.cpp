#include "StaticEnvironmentParticleActor.h"
#include "Components/SceneComponent.h"
#include "StaticEnvironmentNiagaraComponent.h"

AStaticEnvironmentParticleActor::AStaticEnvironmentParticleActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    this->EnvironmentParticleComponent = CreateDefaultSubobject<UStaticEnvironmentNiagaraComponent>(TEXT("StaticParticleComponent"));
    this->EnvironmentParticleComponent->SetupAttachment(RootComponent);
}


