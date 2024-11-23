#include "ModioCommonModBrowserBase.h"
#include "Templates/SubclassOf.h"

UModioCommonModBrowserBase::UModioCommonModBrowserBase() {
    this->ModioStyle = NULL;
}

void UModioCommonModBrowserBase::SetStyle(TSubclassOf<UModioCommonModBrowserBaseStyle> InStyle) {
}

bool UModioCommonModBrowserBase::IsUserAuthenticated() const {
    return false;
}


