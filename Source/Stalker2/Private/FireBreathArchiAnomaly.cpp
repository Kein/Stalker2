#include "FireBreathArchiAnomaly.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AFireBreathArchiAnomaly::AFireBreathArchiAnomaly(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->ScalableRoot = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ScalableRoot"));
    this->CollisionMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CollisionMesh"));
    this->MinRadius = 1000.00f;
    this->MaxRadius = 6250.00f;
    this->MinHeight = 4000.00f;
    this->MaxHeight = 6000.00f;
    this->ScalableRoot->SetupAttachment(RootComponent);
    this->CollisionMesh->SetupAttachment(ScalableRoot);
}

void AFireBreathArchiAnomaly::SetTimeAlpha(const float InTimeAlpha) {
}

void AFireBreathArchiAnomaly::SetScaleAlpha(const float InScaleAlpha) {
}

void AFireBreathArchiAnomaly::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex) {
}

void AFireBreathArchiAnomaly::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult) {
}

float AFireBreathArchiAnomaly::GetTimeAlpha() const {
    return 0.0f;
}

float AFireBreathArchiAnomaly::GetScaleAlpha() const {
    return 0.0f;
}


