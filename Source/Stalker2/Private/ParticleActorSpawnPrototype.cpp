#include "ParticleActorSpawnPrototype.h"

FParticleActorSpawnPrototype::FParticleActorSpawnPrototype() {
    this->BaseSpawnProbability = 0.00f;
    this->SpawnProbabilityIncrement = 0.00f;
    this->SpawnProbabilityCheckTime = 0.00f;
    this->MinSpawnDistance = 0.00f;
    this->MaxSpawnDistance = 0.00f;
    this->SurfaceHeightOffset = 0.00f;
    this->LocationCheckTime = 0.00f;
    this->MaxParticleCount = 0;
    this->bSpawnInPlayerViewport = false;
}

