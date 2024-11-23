#include "ModioCommonScrollBox.h"
#include "Templates/SubclassOf.h"

UModioCommonScrollBox::UModioCommonScrollBox() {
    this->ModioStyle = NULL;
    this->UserDefinedNavigation = NULL;
}

void UModioCommonScrollBox::UpdateNavigationData_Implementation(int32 PendingScrollOffset) {
}

void UModioCommonScrollBox::SetStyle(TSubclassOf<UModioCommonScrollBoxStyle> InStyle) {
}

void UModioCommonScrollBox::OnUserScrolledHandle_Implementation(float CurrentOffset) {
}

UWidget* UModioCommonScrollBox::HandleCustomBoundaryNavigation_Implementation(EUINavigation InNavigation) {
    return NULL;
}


