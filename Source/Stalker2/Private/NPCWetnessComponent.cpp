#include "NPCWetnessComponent.h"

UNPCWetnessComponent::UNPCWetnessComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Niagara = NULL;
    this->SplashSpawnRateParamName = TEXT("SplashSpawnRate");
    this->DropSpawnRateParamName = TEXT("DropSpawnRate");
}


