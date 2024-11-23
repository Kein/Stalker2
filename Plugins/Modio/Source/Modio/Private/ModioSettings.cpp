#include "ModioSettings.h"

UModioSettings::UModioSettings() {
    this->GameId = 5761;
    this->ApiKey = TEXT("2e0db9009c441262f3dc58b871c7c9d9");
    this->Environment = EModioEnvironment::Live;
    this->LogLevel = EModioLogLevel::Info;
    this->DefaultPortal = EModioPortal::None;
    this->bUseBackgroundThread = false;
}


