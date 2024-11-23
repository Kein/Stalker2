#include "ModioCommonModDetailsViewBase.h"

UModioCommonModDetailsViewBase::UModioCommonModDetailsViewBase() {
    this->ModOperationTrackerUserWidget = NULL;
    this->ModOperationTrackerWidget = NULL;
}

bool UModioCommonModDetailsViewBase::IsUserAuthenticated() const {
    return false;
}


