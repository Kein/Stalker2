#include "ModioModCategoryParams.h"

FModioModCategoryParams::FModioModCategoryParams() {
    this->Direction = EModioSortDirection::Ascending;
    this->SortField = EModioSortFieldType::ID;
    this->Count = 0;
    this->InstalledField = EModioInstalledFilterType::None;
    this->EnabledFilter = EModioEnabledFilterType::None;
    this->ManualSortField = EModioManualSortType::AToZ;
}

