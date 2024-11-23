#include "FlowerParticleComponent.h"
#include "Components/SplineComponent.h"
#include "NiagaraComponent.h"

UFlowerParticleComponent::UFlowerParticleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->Spline = CreateDefaultSubobject<USplineComponent>(TEXT("FlowerSplineComponent"));
    this->Collision = NULL;
    this->Particle = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent"));
    this->Speed = 1.00f;
    this->Distance = 0.00f;
    this->Particle->SetupAttachment(Spline);
}


