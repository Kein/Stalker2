#include "ModioModInfo.h"

FModioModInfo::FModioModInfo() {
    this->Supported = false;
    this->ProfileMaturityOption = EModioMaturityFlags::None;
    this->bVisible = false;
    this->Visibility = EModioObjectVisibilityFlags::Hidden;
    this->NumGalleryImages = 0;
    this->ModStatus = EModioModServerSideStatus::NotAccepted;
    this->Price = 0;
}

