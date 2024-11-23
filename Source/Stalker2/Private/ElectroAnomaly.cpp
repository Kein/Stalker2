#include "ElectroAnomaly.h"
#include "Components/StaticMeshComponent.h"

AElectroAnomaly::AElectroAnomaly(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponentPtr = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RootComponent"));
    this->CollisionMeshPtr = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CollisionMesh"));
    this->RootComponentPtr->SetupAttachment(RootComponent);
    this->CollisionMeshPtr->SetupAttachment(RootComponentPtr);
}

float AElectroAnomaly::GetRadius() const {
    return 0.0f;
}

FVector AElectroAnomaly::GetParticleSpawnLocation() const {
    return FVector{};
}

FElectroAnomalyBakedDataFloat AElectroAnomaly::GetElectroBakedData() const {
    return FElectroAnomalyBakedDataFloat{};
}




