#include "Stalker2GameMode.h"
#include "Stalker2HUD.h"
#include "Stalker2PlayerController.h"
#include "Stalker2Spectator.h"

AStalker2GameMode::AStalker2GameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerControllerClass = AStalker2PlayerController::StaticClass();
    this->HUDClass = AStalker2HUD::StaticClass();
    this->SpectatorClass = AStalker2Spectator::StaticClass();
}


