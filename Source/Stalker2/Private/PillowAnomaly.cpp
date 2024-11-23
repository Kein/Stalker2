#include "PillowAnomaly.h"
#include "Components/StaticMeshComponent.h"
#include "NiagaraComponent.h"

APillowAnomaly::APillowAnomaly(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CollisionMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CollisionMesh"));
    this->IdleParticle = CreateDefaultSubobject<UNiagaraComponent>(TEXT("IdleParticle"));
    this->InteractParticle = NULL;
    this->CollisionMesh->SetupAttachment(RootComponent);
    this->IdleParticle->SetupAttachment(RootComponent);
}


