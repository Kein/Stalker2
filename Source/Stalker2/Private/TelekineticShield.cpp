#include "TelekineticShield.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "NiagaraComponent.h"

ATelekineticShield::ATelekineticShield(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    this->Particle = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Particle"));
    this->ShieldDestroyedParticle = NULL;
    this->HitImpactParticle = NULL;
    this->AkAudioComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AudioKineticComponent"));
    this->ShieldDestroyedSound = NULL;
    this->ShieldSpawnedSound = NULL;
    this->ShieldImpactSound = NULL;
    this->Health = 100.00f;
    this->MovementSpeed = 1.00f;
    this->DistanceFromOwner = 200.00f;
    this->OwnerHeightOffset = 100.00f;
    this->ParticleIntensityChangeSpeed = 1.00f;
    this->MaxLifetime = 15.00f;
    this->SpawnShiftFraction = 0.15f;
    this->MeshComponent->SetupAttachment(RootComponent);
    this->Particle->SetupAttachment(RootComponent);
    this->AkAudioComponent->SetupAttachment(RootComponent);
}



void ATelekineticShield::OnDeathParticleFinished(UNiagaraComponent* DeathVFXComponent) {
}

AObj* ATelekineticShield::GetOwnerActor() const {
    return NULL;
}


