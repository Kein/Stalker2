#include "Artifact.h"
#include "Components/SphereComponent.h"
#include "NiagaraComponent.h"
#include "ArtifactInteractableComponent.h"
#include "PhysicsInteractionComponent.h"
#include "PhysicsSoundsComponent.h"

AArtifact::AArtifact(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
    this->SphereComponent = (USphereComponent*)RootComponent;
    this->StrafeParticle = CreateDefaultSubobject<UNiagaraComponent>(TEXT("StrafeParticle"));
    this->ArtifactInteractableComponent = CreateDefaultSubobject<UArtifactInteractableComponent>(TEXT("ArtifactInteractableComponent"));
    this->PhysicsInteractionComponent = CreateDefaultSubobject<UPhysicsInteractionComponent>(TEXT("PhysicsInteractionComponent"));
    this->PhysicsSoundsComponent = CreateDefaultSubobject<UPhysicsSoundsComponent>(TEXT("PhysicsSoundsComponent"));
    this->bDetectorRequired = false;
    this->ChargingEvent = NULL;
    this->JumpEvent = NULL;
    this->Sound = NULL;
    this->SoundStop = NULL;
    this->SoundStateTransitionOnHide = NULL;
    this->SoundStateTransitionOnShow = NULL;
    this->ArtifactTypeSwitchValue = NULL;
    this->ParticleOnShow = NULL;
    this->FakeArtifactDistortionSound = NULL;
    this->FakeArtifactDistortionVFX = NULL;
    this->FakeArtifactDissolveVFX = NULL;
    this->ParticleStateTransitionFadeIn = NULL;
    this->ParticleStateTransitionFadeOut = NULL;
    this->ParticleOnImpact = NULL;
    this->ActiveParticleOnShow = NULL;
    this->StrafeParticle->SetupAttachment(RootComponent);
}


