#include "CooldownZonesController.h"
#include "Components/BoxComponent.h"

ACooldownZonesController::ACooldownZonesController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("ControllerVolume"));
    this->ControllerVolume = (UBoxComponent*)RootComponent;
}


