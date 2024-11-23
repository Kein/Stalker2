#include "BulbAnomaly.h"
#include "Components/SphereComponent.h"

ABulbAnomaly::ABulbAnomaly(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PullSound = NULL;
    this->ReleaseSound = NULL;
    this->IdleSound = NULL;
    this->SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
    this->DamageCurve = NULL;
    this->GravityCurve = NULL;
    this->AnomalySequence = NULL;
    this->LevelSequenceActor = NULL;
    this->EnvironmentMPC = NULL;
    this->FoliageParameterName = TEXT("ANOMALY_BulbSimulationTime");
    this->EnduranceDamagePerSecond = 0.00f;
    this->GravityPower = 0.00f;
    this->GravityFree = 0.00f;
    this->CoveredMultiplier = 0.00f;
    this->UncoveredMultiplier = 0.00f;
    this->CoverTraceDistance = 0.00f;
    this->Duration = 0.00f;
    this->Cooldown = 0.00f;
}

void ABulbAnomaly::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex) {
}

void ABulbAnomaly::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult) {
}


