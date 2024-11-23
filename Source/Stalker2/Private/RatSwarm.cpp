#include "RatSwarm.h"
#include "AISwarmComponent.h"

ARatSwarm::ARatSwarm(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RatUnitsAmount = NULL;
    this->LocomotionUnitsAmount = NULL;
    this->DiedUnitsAmount = NULL;
    this->RatVoice = NULL;
    this->RatLocomotionVoice = NULL;
    this->AlertState = NULL;
    this->AttackState = NULL;
    this->EatingState = NULL;
    this->IdleState = NULL;
    this->RatsMeshComponent = CreateDefaultSubobject<UAISwarmComponent>(TEXT("RatSwarmComponent"));
    this->RatsMeshComponent->SetupAttachment(RootComponent);
}


