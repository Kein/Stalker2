#include "ForceFeedbackSphereComponent.h"

UForceFeedbackSphereComponent::UForceFeedbackSphereComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ForceFeedbackDistanceIntensityCurve = NULL;
    this->UpdateIntensityRate = 0.10f;
    this->UpdateStartFeedbackRate = 0.10f;
    this->bOneShotFeedback = false;
    this->bDisabledByDefault = true;
}

void UForceFeedbackSphereComponent::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex) {
}

void UForceFeedbackSphereComponent::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult) {
}

void UForceFeedbackSphereComponent::EnableForceFeedback() {
}

void UForceFeedbackSphereComponent::DisableForceFeedback() {
}


