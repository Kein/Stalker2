#include "Collar.h"
#include "AkComponent.h"
#include "Components/SkeletalMeshComponent.h"

ACollar::ACollar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CollarSK"));
    this->CollarSID = TEXT("Electrocollar");
    this->HissingComp = CreateDefaultSubobject<UAkComponent>(TEXT("HissingComp"));
    this->CollarSK = (USkeletalMeshComponent*)RootComponent;
    this->HissingComp->SetupAttachment(RootComponent);
}


