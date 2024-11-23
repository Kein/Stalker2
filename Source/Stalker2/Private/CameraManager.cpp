#include "CameraManager.h"

UCameraManager::UCameraManager() {
    this->CameraComponent = NULL;
    this->PlayerCameraManager = NULL;
    this->CachedCameraLookAtMod = NULL;
    this->FovMPC = NULL;
    this->EnvironmentMPC = NULL;
}


