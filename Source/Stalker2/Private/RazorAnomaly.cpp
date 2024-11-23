#include "RazorAnomaly.h"
#include "Components/StaticMeshComponent.h"
#include "NiagaraComponent.h"

ARazorAnomaly::ARazorAnomaly(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponentPtr = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RootComponent"));
    this->CollisionMeshPtr = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CollisionMesh"));
    this->DamageVFX = NULL;
    this->AIDamageVFX = NULL;
    this->ProjectileDestructionVFX = NULL;
    this->ThrowableDestructionVFX = NULL;
    this->RazorActiveVFX = CreateDefaultSubobject<UNiagaraComponent>(TEXT("RazorActiveVFX"));
    this->RazorIntensityRTPC = NULL;
    this->RootComponentPtr->SetupAttachment(RootComponent);
    this->CollisionMeshPtr->SetupAttachment(RootComponentPtr);
    this->RazorActiveVFX->SetupAttachment(RootComponentPtr);
}


