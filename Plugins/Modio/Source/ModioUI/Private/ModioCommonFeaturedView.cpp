#include "ModioCommonFeaturedView.h"
#include "Templates/SubclassOf.h"

UModioCommonFeaturedView::UModioCommonFeaturedView() {
    this->ModioStyle = NULL;
    this->SearchResultsView = NULL;
    this->OverriddenModsCount = -1;
    this->bWasFilterAppliedAtLeastOnce = false;
}

void UModioCommonFeaturedView::SetStyle(TSubclassOf<UModioCommonFeaturedViewStyle> InStyle) {
}

void UModioCommonFeaturedView::RefreshListByFilter_Implementation(const FModioFilterParams& Filter) {
}

void UModioCommonFeaturedView::RefreshListByCategoryName_Implementation(FName InCategoryName) {
}

void UModioCommonFeaturedView::RefreshList_Implementation() {
}


