#include "Stalker2BaseGameMode.h"

AStalker2BaseGameMode::AStalker2BaseGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultPawnClass = NULL;
    this->bStartPlayersAsSpectators = true;
}


