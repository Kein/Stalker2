#include "InteractableMonitorSection.h"
#include "Components/StaticMeshComponent.h"
#include "SignalReceiverComponent.h"

AInteractableMonitorSection::AInteractableMonitorSection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UStaticMeshComponent>(TEXT("MonitorMesh"))) {
    this->MonitorMesh = (UStaticMeshComponent*)RootComponent;
    this->ActivationSignalReceiver = CreateDefaultSubobject<USignalReceiverComponent>(TEXT("ActivationSignalReceiver"));
    this->DeactivationSignalReceiver = CreateDefaultSubobject<USignalReceiverComponent>(TEXT("DeactivationSignalReceiver"));
    this->DestructionSignalReceiver = CreateDefaultSubobject<USignalReceiverComponent>(TEXT("DestructionSignalReceiver"));
    this->DestructionVFX = NULL;
}





