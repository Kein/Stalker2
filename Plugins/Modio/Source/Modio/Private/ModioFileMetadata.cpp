#include "ModioFileMetadata.h"

FModioFileMetadata::FModioFileMetadata() {
    this->CurrentVirusScanStatus = EModioVirusScanStatus::NotScanned;
    this->CurrentVirusStatus = EModioVirusStatus::NoThreat;
    this->Filesize = 0;
}

