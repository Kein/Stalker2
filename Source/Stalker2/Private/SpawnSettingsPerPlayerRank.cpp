#include "SpawnSettingsPerPlayerRank.h"

FSpawnSettingsPerPlayerRank::FSpawnSettingsPerPlayerRank() {
    this->PlayerRank = ERank::Newbie;
    this->MaxSpawnQuantity = 0;
    this->InitialSpawnQuantityPercent = 0.00f;
    this->InitialSpawnQuantityRespawnTimeSeconds = 0.00f;
    this->MaxSpawnQuantityRespawnTimeSeconds = 0.00f;
    this->WipeRespawnTimeoutSeconds = 0.00f;
}

