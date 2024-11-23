#include "ModioInitializeOptions.h"

FModioInitializeOptions::FModioInitializeOptions() {
    this->GameEnvironment = EModioEnvironment::Test;
    this->PortalInUse = EModioPortal::None;
    this->bUseBackgroundThread = false;
}

