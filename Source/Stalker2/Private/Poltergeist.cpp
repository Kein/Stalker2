#include "Poltergeist.h"
#include "Components/SphereComponent.h"
#include "NiagaraComponent.h"

APoltergeist::APoltergeist(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BodyParticles = CreateDefaultSubobject<UNiagaraComponent>(TEXT("BodyParticles"));
    this->BodyCollision = CreateDefaultSubobject<USphereComponent>(TEXT("BodyCollision"));
    this->DeathParticles = CreateDefaultSubobject<UNiagaraComponent>(TEXT("DeathParticles"));
    this->DeathBodyVisibilityDelay = 0.25f;
    this->BodyParticles->SetupAttachment(RootComponent);
    this->BodyCollision->SetupAttachment(BodyParticles);
    this->DeathParticles->SetupAttachment(BodyParticles);
}


