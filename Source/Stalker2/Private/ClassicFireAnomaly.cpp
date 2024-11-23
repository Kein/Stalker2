#include "ClassicFireAnomaly.h"
#include "Components/CapsuleComponent.h"
#include "Components/DecalComponent.h"
#include "Components/StaticMeshComponent.h"
#include "NiagaraComponent.h"

AClassicFireAnomaly::AClassicFireAnomaly(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CollisionMeshPtr = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CollisionMesh"));
    const FProperty* p_FlamePillarCapsule_Parent = GetClass()->FindPropertyByName("FlamePillarCapsule");
    this->FlamePillarCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("FlamePillarComponent"));
    this->IdleVFX = CreateDefaultSubobject<UNiagaraComponent>(TEXT("IdleVFX"));
    this->DecalComponent = CreateDefaultSubobject<UDecalComponent>(TEXT("DecalComponent"));
    this->CollisionMeshPtr->SetupAttachment(p_FlamePillarCapsule_Parent->ContainerPtrToValuePtr<UCapsuleComponent>(this));
    this->FlamePillarCapsule->SetupAttachment(RootComponent);
    this->IdleVFX->SetupAttachment(FlamePillarCapsule);
    this->DecalComponent->SetupAttachment(FlamePillarCapsule);
}



