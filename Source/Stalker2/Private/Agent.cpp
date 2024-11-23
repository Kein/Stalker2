#include "Agent.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "Components/LODSyncComponent.h"
#include "MotionWarpingComponent.h"
#include "PhysicsControlComponent.h"
#include "AITickComponent.h"
#include "DataLayerPhysicsComponent.h"
#include "GSCAIController.h"
#include "NPCWetnessComponent.h"
#include "PhysicsInteractionComponent.h"
#include "PhysicsSoundsComponent.h"
#include "PoseSearchLocomotionCharacterMovementComponent.h"
#include "WoundedHoldComponent.h"

AAgent::AAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USkeletalMeshComponentBudgeted>(TEXT("CharacterMesh0")).SetDefaultSubobjectClass<UPoseSearchLocomotionCharacterMovementComponent>(TEXT("CharMoveComp"))) {
    this->AIControllerClass = AGSCAIController::StaticClass();
    this->WetnessComponent = CreateDefaultSubobject<UNPCWetnessComponent>(TEXT("WetnessComponent"));
    this->PhysicsSoundsComponent = CreateDefaultSubobject<UPhysicsSoundsComponent>(TEXT("PhysicsSoundsComponent"));
    this->NPCComponent = NULL;
    this->PhysicsInteractionComponent = CreateDefaultSubobject<UPhysicsInteractionComponent>(TEXT("PhysicsInteractionComponent"));
    this->WoundedHoldComponent = CreateDefaultSubobject<UWoundedHoldComponent>(TEXT("WoundedHoldComponent"));
    this->TouchComponent = NULL;
    this->MotionWarpingComponent = CreateDefaultSubobject<UMotionWarpingComponent>(TEXT("MotionWarpingComponent"));
    this->AITickComponent = CreateDefaultSubobject<UAITickComponent>(TEXT("AITickComponent"));
    this->PhysicsControlComponent = CreateDefaultSubobject<UPhysicsControlComponent>(TEXT("PhysicsControlComponent"));
    this->LODSyncComponent = CreateDefaultSubobject<ULODSyncComponent>(TEXT("LODSyncComponent"));
    this->DataLayerPhysicsComponent = CreateDefaultSubobject<UDataLayerPhysicsComponent>(TEXT("DataLayerPhysicsComponent"));
    this->DeadBodyComponent = NULL;
    this->CutsceneLookAtActor = NULL;
    this->CutsceneEyesLookAtWeight = 1.00f;
    this->CutsceneHeadLookAtWeight = 0.00f;
    this->CutsceneBlinkProfile = ECutsceneBlinkProfile::NoBlink;
    this->CutsceneEyesIdleProfile = ECutsceneEyesIdleProfile::NoIdle;
    this->CutsceneProceduralEyesWeight = 0.00f;
    this->CutsceneProceduralEyesAmplitude = 0.50f;
    this->CutsceneProceduralEyesIntensity = 0.75f;
    this->GuaranteedRelevancyUpdateTime = 20.00f;
    this->RagdollProfileName = TEXT("AgentRagdoll");
    const FProperty* p_Mesh = GetClass()->FindPropertyByName("Mesh");
    (*p_Mesh->ContainerPtrToValuePtr<USkeletalMeshComponent*>(this))->SetupAttachment(RootComponent);
}

void AAgent::SetCutsceneProceduralEyesWeight(float Value) const {
}

void AAgent::SetCutsceneProceduralEyesIntensity(float Value) const {
}

void AAgent::SetCutsceneProceduralEyesAmplitude(float Value) const {
}

void AAgent::SetCutsceneLookAtActor(const AActor* Value) const {
}

void AAgent::SetCutsceneHeadLookAtWeight(float Weight) const {
}

void AAgent::SetCutsceneEyesLookAtWeight(float Weight) const {
}

void AAgent::SetCutsceneEyesIdleProfile(ECutsceneEyesIdleProfile NewCutsceneEyesIdleProfile) const {
}

void AAgent::SetCutsceneBlinkProfile(ECutsceneBlinkProfile NewCutsceneBlinkProfile) const {
}

void AAgent::PsyNPCInteractionStarted(AObj* InteractActor) {
}

ESpawnSource AAgent::GetSpawnSource() const {
    return ESpawnSource::Quest;
}

void AAgent::DestroyDamageInteractParticle(UNiagaraComponent* ParticleSystem) {
}

void AAgent::Blink() const {
}


