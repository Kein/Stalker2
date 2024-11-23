#include "TerraVolume.h"

ATerraVolume::ATerraVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSkipRestoreOnDelete = false;
    this->CachedLandscape = NULL;
    this->bApplied = false;
    this->bKeepTerrainOnDestruction = false;
}


