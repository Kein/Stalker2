#include "PC.h"
#include "Engine/EngineTypes.h"
#include "AimAssistComponent.h"
#include "AimProcessorComponent.h"
#include "DamageVoiceoverComponent.h"
#include "ModelCharacterMovementComponent.h"
#include "MouthComponent.h"
#include "PlayerInteractionComponent.h"
#include "PlayerOpticScopeComponent.h"
#include "WetnessComponent.h"

APC::APC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UModelCharacterMovementComponent>(TEXT("CharMoveComp"))) {
    this->AutoPossessAI = EAutoPossessAI::Disabled;
    this->WetnessComponent = CreateDefaultSubobject<UWetnessComponent>(TEXT("WetnessComponent"));
    this->Mouth = CreateDefaultSubobject<UMouthComponent>(TEXT("Mouth"));
    this->DamageVoiceover = CreateDefaultSubobject<UDamageVoiceoverComponent>(TEXT("DamageVoiceover"));
    this->AimAssistComponent = CreateDefaultSubobject<UAimAssistComponent>(TEXT("AimAssistComponent"));
    this->AimProcessor = CreateDefaultSubobject<UAimProcessorComponent>(TEXT("AimProcessor"));
    this->ShadowMeshComponent = NULL;
    this->GeigerCounterComponent = NULL;
    this->PsyNoiseSFXComponent = NULL;
    this->AnomalyDetectorComponent = NULL;
    this->PlayerOpticScopeComponent = CreateDefaultSubobject<UPlayerOpticScopeComponent>(TEXT("PlayerOpticScopeComponent"));
    this->PlayerInteractionComponent = CreateDefaultSubobject<UPlayerInteractionComponent>(TEXT("PlayerInteractionComponent"));
    this->StealthKillComponent = NULL;
    this->StealthKillTarget = NULL;
    this->SearchpointDetectorComponent = NULL;
    this->GAComponent = NULL;
    this->InteractionFromBluerint = false;
    this->MinObjectInteractImpulse = -10.00f;
    this->MaxObjectInteractImpulse = -500.00f;
    this->ObjectInteractDelay = 0.25f;
    this->MinSpeedToObjectResponse = 10.00f;
    this->NormalReapeatFPS = 60.00f;
    this->VelocityMultimplier = 1.00f;
    this->ObjectPenetrationToImpulseCurve = NULL;
    this->ObjectMassToImpulseCurve = NULL;
    this->ObjectMassToMaxImpulseCurve = NULL;
    this->ReduceDamageFromNPCCurve = NULL;
    this->AllowedMovementActions = EPlayerMovementType::All;
    this->PoppyFieldSleepinessParameter = NULL;
}

void APC::SetLegsIKEnabled(const bool bEnabled) {
}

void APC::SetInteractionTarget(const UInteractionComponent* Target) {
}

void APC::PlayInteractionOutAnimation() {
}

void APC::PlayInteractionInAnimation() {
}

UInteractionComponent* APC::GetInteractionTarget() const {
    return NULL;
}


