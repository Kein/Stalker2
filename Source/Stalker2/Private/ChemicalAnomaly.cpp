#include "ChemicalAnomaly.h"
#include "Components/StaticMeshComponent.h"

AChemicalAnomaly::AChemicalAnomaly(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CollisionMeshPtr = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CollisionMesh"));
    this->SplashImpact = NULL;
    this->GrenadeExplosion = NULL;
    this->CollisionMeshPtr->SetupAttachment(RootComponent);
}



