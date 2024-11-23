#include "ProjectileSpawnSettings.h"

UProjectileSpawnSettings::UProjectileSpawnSettings() {
    this->ProjectileAmountRefreshRate = 1.00f;
    this->ProjectileActiveKeepTime = 30.00f;
    this->ProjectileDesiredPreHeatTime = 0.50f;
    this->ProjectileExtraPreHeatShots = 1;
    this->ProjectileSpawnPerFrameAmount = 3;
    this->MaxDestroyedProjectilesPerFrame = 3;
}


