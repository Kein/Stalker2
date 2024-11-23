#include "ClickerAnomaly.h"
#include "Components/StaticMeshComponent.h"

AClickerAnomaly::AClickerAnomaly(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponentPtr = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RootComponent"));
    this->CollisionMeshPtr = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CollisionMesh"));
    this->ChargeParticle = NULL;
    this->ExplosionParticle = NULL;
    this->ChargeSoundEvent = NULL;
    this->ExplosionSoundEvent = NULL;
    this->DamageCurve = NULL;
    this->RootComponentPtr->SetupAttachment(RootComponent);
    this->CollisionMeshPtr->SetupAttachment(RootComponentPtr);
}

void AClickerAnomaly::OnBeginParticleOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult) {
}


