#include "PlatformManager.h"

UPlatformManager::UPlatformManager() {
    this->InputStorySize = 5;
    this->bUsePlatformSwitchingThreshold = true;
    this->PlatformSwitchingThreshold = 0.10f;
    this->bSwitchToOtherDeviceOnConnect = true;
    this->bUseMouseFeatures = false;
}


