#include "ToxicCloudAnomaly.h"
#include "Components/StaticMeshComponent.h"
#include "NiagaraComponent.h"
#include "HittableComponent.h"

AToxicCloudAnomaly::AToxicCloudAnomaly(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CollisionMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CollisionMesh"));
    this->CloudParticle = CreateDefaultSubobject<UNiagaraComponent>(TEXT("CloudParticle"));
    this->ImpactParticle = NULL;
    this->HittableComponent = CreateDefaultSubobject<UHittableComponent>(TEXT("Hittable"));
    this->ToxicCloudSoundEvent = NULL;
    this->AppearSoundEvent = NULL;
    this->DisappearSoundEvent = NULL;
    this->CollisionMesh->SetupAttachment(RootComponent);
    this->CloudParticle->SetupAttachment(RootComponent);
}


