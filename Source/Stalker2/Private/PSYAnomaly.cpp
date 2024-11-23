#include "PSYAnomaly.h"
#include "Components/SphereComponent.h"
#include "NiagaraComponent.h"

APSYAnomaly::APSYAnomaly(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
    this->PSYParticle = CreateDefaultSubobject<UNiagaraComponent>(TEXT("PSYParticle"));
    this->CollisionComponent->SetupAttachment(RootComponent);
    this->PSYParticle->SetupAttachment(CollisionComponent);
}


