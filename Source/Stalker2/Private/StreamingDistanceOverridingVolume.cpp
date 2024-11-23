#include "StreamingDistanceOverridingVolume.h"

AStreamingDistanceOverridingVolume::AStreamingDistanceOverridingVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MainVolume = NULL;
    this->OverrideLifeGridVisionRadiusPC = EOverrideLifeGridVisionRadius::None;
    this->OverrideLifeGridVisionRadiusXBox = EOverrideLifeGridVisionRadius::None;
    this->OverridingTime = 5.00f;
    this->VolumePriority = 0;
    this->FallbackStreamingBlockRestoreRate = -1.00f;
    this->OverridingDistantTreeCullDistanceScale = 1.00f;
}

void AStreamingDistanceOverridingVolume::UpdateStreamingConfiguration() {
}

void AStreamingDistanceOverridingVolume::OnTriggerOverlapped(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult) {
}


