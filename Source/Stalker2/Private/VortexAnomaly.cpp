#include "VortexAnomaly.h"
#include "AkComponent.h"
#include "Components/SplineComponent.h"
#include "Components/StaticMeshComponent.h"

AVortexAnomaly::AVortexAnomaly(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RootMeshComponent"));
    this->AudioComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AudioComponent"));
    this->VortexDistanceRTPC = NULL;
    this->MinPlayerDistanceToUpdateSound = 0.10f;
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineMovementComponent"));
    this->RootMeshComponent = (UStaticMeshComponent*)RootComponent;
    this->VortexCollisionComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VortexCollisionComponent"));
    this->VortexSafeZoneComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VortexSafeZoneComponent"));
    this->VortexHalfHeight = 0.00f;
    this->VortexCollisionRadius = 0.00f;
    this->VortexSafeZoneRadius = 0.00f;
    this->ThrowInvulnerabilityDuration = 0.00f;
    this->VortexOuterImpulse = 0.00f;
    this->VortexOuterLiftHeight = 0.00f;
    this->VortexOuterLiftHorizontalSpeed = 0.00f;
    this->VortexOuterLiftVerticalSpeed = 0.00f;
    this->VortexOuterLiftMaxDuration = 0.00f;
    this->VortexInnerImpulse = 0.00f;
    this->VortexInnerLiftHeight = 0.00f;
    this->VortexInnerLiftHorizontalSpeed = 0.00f;
    this->VortexInnerLiftVerticalSpeed = 0.00f;
    this->VortexInnerLiftMaxDuration = 0.00f;
    this->VortexSafeZoneLeaveTime = 0.00f;
    this->ArtifactHeight = 0.00f;
    this->bSpawnArtifactOnEmissionOnly = false;
    this->DudeSpawnDistance = 0.00f;
    this->DudeSpawnHeight = 0.00f;
    this->DudeTimeToReachPlayer = 2.00f;
    this->DudeTargetDistance = 150.00f;
    this->VortexToPlayerDistForDudeSpawn = 0.00f;
    this->VortexToPlayerDistCheckFrequency = 0.10f;
    this->DudeAudioEvent = NULL;
    this->IndoorMPC = NULL;
    this->AudioComponent->SetupAttachment(VortexCollisionComponent);
    this->SplineComponent->SetupAttachment(RootComponent);
    this->VortexCollisionComponent->SetupAttachment(RootComponent);
    this->VortexSafeZoneComponent->SetupAttachment(VortexCollisionComponent);
}

void AVortexAnomaly::OnVortexSafeZoneEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex) {
}

void AVortexAnomaly::OnVortexSafeZoneBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult) {
}

void AVortexAnomaly::OnVortexEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex) {
}

void AVortexAnomaly::OnVortexBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult) {
}


