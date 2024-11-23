#include "EncounterNPCSpawner.h"
#include "SignalSenderComponent.h"

AEncounterNPCSpawner::AEncounterNPCSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AllNPCKilledSender = CreateDefaultSubobject<USignalSenderComponent>(TEXT("AllNPCKilledSender"));
    this->PlayerFieldOfViewAngle = 0.00f;
    this->NPCTotalCount = 0;
    this->NPCMaxCount = 0;
    this->NPCMinCount = 0;
    this->SpawnSource = ESpawnSource::Quest;
}


void AEncounterNPCSpawner::Enable() {
}

void AEncounterNPCSpawner::Disable() {
}

void AEncounterNPCSpawner::Despawn() {
}


