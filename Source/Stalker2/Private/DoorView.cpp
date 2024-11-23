#include "DoorView.h"
#include "Components/BoxComponent.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GSCNavModifierComponent.h"
#include "HittableComponent.h"
#include "HoldComponent.h"
#include "ItemUsageComponent.h"
#include "SignalReceiverComponent.h"
#include "SignalSenderComponent.h"
#include "SingleClickComponent.h"

ADoorView::ADoorView(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
    this->OpenDoorSingleClick = CreateDefaultSubobject<USingleClickComponent>(TEXT("OpenDoorSingleClick"));
    this->CloseDoorSingleClick = CreateDefaultSubobject<USingleClickComponent>(TEXT("CloseDoorSingleClick"));
    this->LockedSingleClick = CreateDefaultSubobject<USingleClickComponent>(TEXT("LockedSingleClick"));
    this->PeekDoorHold = CreateDefaultSubobject<UHoldComponent>(TEXT("PeekDoorHold"));
    this->ClosePeekDoorHold = CreateDefaultSubobject<UHoldComponent>(TEXT("ClosePeekDoorHold"));
    this->bIsHubDoor = false;
    this->bIsLocked = false;
    this->bIsDoubleDoor = false;
    this->OpenAngleThreshold = 0.00f;
    this->OpenAngle = 75.00f;
    this->DecreaseImpulseAfterOpenTime = 0.25f;
    this->OpenAngularSpeed = 90.00f;
    this->CloseAngularSpeed = 15.00f;
    this->AngularSpeedNormalizer = 200.00f;
    this->DoorCloseTime = 3.00f;
    this->SilentOpenAngle = 30.00f;
    this->SilentOpenAngularSpeed = 30.00f;
    this->FirstLeafAngleOnStart = 0.00f;
    this->SecondLeafAngleOnStart = 0.00f;
    this->KnockOutAngularSpeed = 1000.00f;
    this->AutomaticDoorCloseTimeout = 5.00f;
    this->CloseDoorSpeedMultiplier = 2.00f;
    this->DoorConstraintSFXCooldown = 2.00f;
    this->DefaultRoot = (USceneComponent*)RootComponent;
    this->FrameMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FrameMesh"));
    this->FirstLeafMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FirstLeaf"));
    this->SecondLeafMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SecondLeaf"));
    this->FirstLeafPhysicsConstraintComponent = CreateDefaultSubobject<UPhysicsConstraintComponent>(TEXT("FirstLeafPhysicsConstraintComponent"));
    this->SecondLeafPhysicsConstraintComponent = CreateDefaultSubobject<UPhysicsConstraintComponent>(TEXT("SecondLeafPhysicsConstraintComponent"));
    this->HittableComponent = CreateDefaultSubobject<UHittableComponent>(TEXT("HittableComponent"));
    this->SpaceRestrictorComponent = CreateDefaultSubobject<UGSCNavModifierComponent>(TEXT("SpaceRestrictorComponent"));
    this->BlockVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("BlockVolume"));
    this->InvertDoorStateReceiver = CreateDefaultSubobject<USignalReceiverComponent>(TEXT("InvertDoorStateReceiver"));
    this->InvertDoorLockReceiver = CreateDefaultSubobject<USignalReceiverComponent>(TEXT("InvertDoorLockReceiver"));
    this->OpenDoorReceiver = CreateDefaultSubobject<USignalReceiverComponent>(TEXT("OpenDoorReceiver"));
    this->CloseDoorReceiver = CreateDefaultSubobject<USignalReceiverComponent>(TEXT("CloseDoorReceiver"));
    this->LockDoorReceiver = CreateDefaultSubobject<USignalReceiverComponent>(TEXT("LockDoorReceiver"));
    this->UnlockDoorReceiver = CreateDefaultSubobject<USignalReceiverComponent>(TEXT("UnlockDoorReceiver"));
    this->PeekDoorReceiver = CreateDefaultSubobject<USignalReceiverComponent>(TEXT("PeekDoorReceiver"));
    this->ForceOpenDoorReceiver = CreateDefaultSubobject<USignalReceiverComponent>(TEXT("ForceOpenDoorReceiver"));
    this->ForceCloseDoorReceiver = CreateDefaultSubobject<USignalReceiverComponent>(TEXT("ForceCloseDoorReceiver"));
    this->OpenDoorSender = CreateDefaultSubobject<USignalSenderComponent>(TEXT("OpenDoorSender"));
    this->CloseDoorSender = CreateDefaultSubobject<USignalSenderComponent>(TEXT("CloseDoorSender"));
    this->LockDoorSender = CreateDefaultSubobject<USignalSenderComponent>(TEXT("LockDoorSender"));
    this->UnlockDoorSender = CreateDefaultSubobject<USignalSenderComponent>(TEXT("UnlockDoorSender"));
    this->ForceOpenDoorSender = CreateDefaultSubobject<USignalSenderComponent>(TEXT("ForceOpenDoorSender"));
    this->ForceCloseDoorSender = CreateDefaultSubobject<USignalSenderComponent>(TEXT("ForceCloseDoorSender"));
    this->PeekDoorSender = CreateDefaultSubobject<USignalSenderComponent>(TEXT("PeekDoorSender"));
    this->ItemUsageComponent = CreateDefaultSubobject<UItemUsageComponent>(TEXT("ItemUsageComponent"));
    this->FrameMeshComponent->SetupAttachment(RootComponent);
    this->FirstLeafMeshComponent->SetupAttachment(FrameMeshComponent);
    this->SecondLeafMeshComponent->SetupAttachment(FrameMeshComponent);
    this->FirstLeafPhysicsConstraintComponent->SetupAttachment(FrameMeshComponent);
    this->SecondLeafPhysicsConstraintComponent->SetupAttachment(FrameMeshComponent);
    this->BlockVolume->SetupAttachment(FrameMeshComponent);
}

void ADoorView::UnlockDoor() const {
}

void ADoorView::RebuildDoorView() {
}

void ADoorView::PlayLockedDoorSound() {
}

void ADoorView::PeekDoor() {
}

void ADoorView::PeekCloseDoor() {
}

void ADoorView::OpenDoor() {
}


void ADoorView::OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void ADoorView::LockDoor() {
}

void ADoorView::InvertDoorState() {
}

void ADoorView::InvertDoorLock() {
}

void ADoorView::ForceOpenDoor() {
}

void ADoorView::ForceCloseDoor() {
}

void ADoorView::CloseDoor(const bool bCloseFast) {
}

void ADoorView::ActualizeNavigationProperties() {
}


