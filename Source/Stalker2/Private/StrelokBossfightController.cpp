#include "StrelokBossfightController.h"
#include "Components/BoxComponent.h"
#include "SignalReceiverComponent.h"

AStrelokBossfightController::AStrelokBossfightController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("ControllerVolume"));
    this->ControllerVolume = (UBoxComponent*)RootComponent;
    this->SignalReceiverComponent = CreateDefaultSubobject<USignalReceiverComponent>(TEXT("SignalReceiverComponent"));
    this->AnomalySpawnNum = 2;
    this->AnomalySpawnDelay = 3.00f;
}

void AStrelokBossfightController::SpawnAnomalyField() {
}


