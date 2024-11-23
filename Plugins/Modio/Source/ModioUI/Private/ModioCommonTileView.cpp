#include "ModioCommonTileView.h"
#include "Templates/SubclassOf.h"

UModioCommonTileView::UModioCommonTileView(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ModioStyle = NULL;
}

void UModioCommonTileView::SetStyle(TSubclassOf<UModioCommonListViewStyle> InStyle) {
}


