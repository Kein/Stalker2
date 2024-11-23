#include "DeveloperSpectator.h"

ADeveloperSpectator::ADeveloperSpectator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BaseTurnRate = 40.00f;
    this->BaseLookUpRate = 20.00f;
    this->SpeedMultiplier = 2.00f;
    this->CameraComponent = NULL;
}


