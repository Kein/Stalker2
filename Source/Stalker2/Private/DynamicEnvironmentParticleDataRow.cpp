#include "DynamicEnvironmentParticleDataRow.h"

FDynamicEnvironmentParticleDataRow::FDynamicEnvironmentParticleDataRow() {
    this->ParticleType = EDynamicParticleType::None;
    this->bCanSpawnOnWater = false;
    this->bStopOnCutscene = false;
}

