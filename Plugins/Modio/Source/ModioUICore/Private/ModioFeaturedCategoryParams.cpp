#include "ModioFeaturedCategoryParams.h"

UModioFeaturedCategoryParams::UModioFeaturedCategoryParams() {
    this->Direction = EModioSortDirection::Ascending;
    this->SortField = EModioSortFieldType::ID;
    this->Count = 20;
}


