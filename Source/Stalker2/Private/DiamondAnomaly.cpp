#include "DiamondAnomaly.h"
#include "Components/StaticMeshComponent.h"

ADiamondAnomaly::ADiamondAnomaly(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CollisionMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CollisionMesh"));
    this->CollisionMesh->SetupAttachment(RootComponent);
}


