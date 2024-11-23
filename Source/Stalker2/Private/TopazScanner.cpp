#include "TopazScanner.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "TopazScannerComponent.h"
#include "TopazSingleClickComponent.h"

ATopazScanner::ATopazScanner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->InvisibleScannerCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("InvisibleScannerCollision"));
    this->SingleClickComponent = CreateDefaultSubobject<UTopazSingleClickComponent>(TEXT("SingleClickComponent"));
    this->ScannerComponent = CreateDefaultSubobject<UTopazScannerComponent>(TEXT("ScannerComponent"));
    this->bStationary = true;
    this->SievertsCenterValue = 0.00f;
    this->SievertsDeviation = 0.00f;
    this->SievertsChangeFrequency = 0.00f;
    this->bSuccessfulScanner = false;
    this->SkeletalMesh->SetupAttachment(RootComponent);
    this->InvisibleScannerCollision->SetupAttachment(RootComponent);
}

void ATopazScanner::OnStateChanged(const ETopazScannerState NewState) {
}

bool ATopazScanner::IsStationary() const {
    return false;
}


