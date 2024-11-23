#include "Door.h"

UDoor::UDoor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShouldRestoreAngle = false;
    this->bTaskCanBeInterrupted = false;
    this->bDoorCanBePushed = true;
    this->InitialPushImpulseMultiplier = 3.00f;
    this->AngleRestoreSpeed = 90.00f;
    this->AngleRestoreDelay = 10.00f;
    this->CurrentState = EDoorState::Locked;
}

void UDoor::OnDoorMeshHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}


