#include "ModioCommonListView.h"
#include "Templates/SubclassOf.h"

UModioCommonListView::UModioCommonListView(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ModioStyle = NULL;
}

void UModioCommonListView::SetStyle(TSubclassOf<UModioCommonListViewStyle> InStyle) {
}


