#include "BarbedWireComponent.h"

UBarbedWireComponent::UBarbedWireComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BarbedWirePrototypeSID = TEXT("LimitingBarbedWire");
}

void UBarbedWireComponent::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UBarbedWireComponent::OnOverlapBegin(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UBarbedWireComponent::OnCompHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}


