#include "ModioCommonSearchTabView.h"
#include "Templates/SubclassOf.h"

UModioCommonSearchTabView::UModioCommonSearchTabView() {
    this->ModioStyle = NULL;
    this->InternalBackgroundBorder = NULL;
    this->OverlayBackgroundBorder = NULL;
    this->SearchTabTitleTextBlock = NULL;
    this->FilteringView = NULL;
    this->SearchTextBox = NULL;
    this->CloseButton = NULL;
    this->SearchButton = NULL;
    this->ResetButton = NULL;
}

void UModioCommonSearchTabView::ShowSearchResults_Implementation() {
}

void UModioCommonSearchTabView::SetStyle(TSubclassOf<UModioCommonSearchTabViewStyle> InStyle) {
}

void UModioCommonSearchTabView::Reset_Implementation() {
}

void UModioCommonSearchTabView::OnSearchTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

FModioModCategoryParams UModioCommonSearchTabView::GetFilterParamsWrapper_Implementation() const {
    return FModioModCategoryParams{};
}

FModioFilterParams UModioCommonSearchTabView::GetFilterParams_Implementation() const {
    return FModioFilterParams{};
}


