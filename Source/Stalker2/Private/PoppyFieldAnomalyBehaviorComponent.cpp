#include "PoppyFieldAnomalyBehaviorComponent.h"

UPoppyFieldAnomalyBehaviorComponent::UPoppyFieldAnomalyBehaviorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SleepTeleportMinDistance = 0.00f;
    this->SleepDuration = 0.00f;
}

void UPoppyFieldAnomalyBehaviorComponent::OnEndOverlapFlowers(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UPoppyFieldAnomalyBehaviorComponent::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UPoppyFieldAnomalyBehaviorComponent::OnBeginOverlapFlowers(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UPoppyFieldAnomalyBehaviorComponent::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


