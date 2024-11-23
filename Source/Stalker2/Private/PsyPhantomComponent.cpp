#include "PsyPhantomComponent.h"

UPsyPhantomComponent::UPsyPhantomComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SecondsToAppear = 1.00f;
    this->SecondsToDisappear = 1.00f;
    this->PhatnomHeightChangeSpeedPerSecond = 0.15f;
    this->ParticleOnSpawn = NULL;
    this->PhantomHitVFX = NULL;
    this->ParticleOnDeath = NULL;
    this->TrailsParticle = NULL;
    this->RTPC = NULL;
    this->SpawnSound = NULL;
    this->DeathSound = NULL;
    this->bUseDissolveMaterials = true;
    this->SpawnTimestamp = -1.00f;
    this->DeathTimestamp = -1.00f;
    this->TrailsFX = NULL;
}

void UPsyPhantomComponent::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult) {
}


