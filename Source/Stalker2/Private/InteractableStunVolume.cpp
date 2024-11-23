#include "InteractableStunVolume.h"
#include "Components/StaticMeshComponent.h"
#include "GSCNavModifierComponent.h"
#include "SignalReceiverComponent.h"
#include "SignalSenderComponent.h"

AInteractableStunVolume::AInteractableStunVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UStaticMeshComponent>(TEXT("RootMesh"))) {
    this->RootMesh = (UStaticMeshComponent*)RootComponent;
    this->CollisionMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CollisionMesh"));
    this->SpaceRestrictorComponent = CreateDefaultSubobject<UGSCNavModifierComponent>(TEXT("SpaceRestrictorComponent"));
    this->MonitorActivationSignalSender = CreateDefaultSubobject<USignalSenderComponent>(TEXT("MonitorActivationSignalSender"));
    this->ObjectActivationSignalSender = CreateDefaultSubobject<USignalSenderComponent>(TEXT("ObjectActivationSignalSender"));
    this->MonitorDeactivationSignalSender = CreateDefaultSubobject<USignalSenderComponent>(TEXT("MonitorDeactivationSignalSender"));
    this->ObjectDeactivationSignalSender = CreateDefaultSubobject<USignalSenderComponent>(TEXT("ObjectDeactivationSignalSender"));
    this->MonitorDestructionSignalSender = CreateDefaultSubobject<USignalSenderComponent>(TEXT("MonitorDestructionSignalSender"));
    this->VolumeActivationSignalReceiver = CreateDefaultSubobject<USignalReceiverComponent>(TEXT("VolumeActivationSignalReceiver"));
    this->CollisionRadius = 1.00f;
    this->CollisionHeight = 1.00f;
    this->StunDuration = 0.10f;
    this->CooldownDuration = 0.10f;
    this->CollisionMesh->SetupAttachment(RootComponent);
}





void AInteractableStunVolume::ActivateVolume(UObject* InObject) {
}


