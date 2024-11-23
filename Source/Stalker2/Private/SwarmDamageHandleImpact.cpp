#include "SwarmDamageHandleImpact.h"

FSwarmDamageHandleImpact::FSwarmDamageHandleImpact() {
    this->bSpawnCorpseOnDestroy = false;
    this->bApplyImpulseToCorpse = false;
    this->bAttachImpactEffectToCorpse = false;
    this->bSetMaterialParametersToCorpse = false;
    this->ImpulseScale = 0.00f;
    this->AngularImpulseScale = 0.00f;
    this->SpawnCorpseTemplate = NULL;
    this->ImpactEffect = NULL;
    this->EnvironmentEffect = NULL;
}

