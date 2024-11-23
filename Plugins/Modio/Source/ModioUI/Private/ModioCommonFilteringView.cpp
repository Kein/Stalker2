#include "ModioCommonFilteringView.h"

UModioCommonFilteringView::UModioCommonFilteringView() {
    this->bAutoFocusOnActivation = false;
    this->FilteringTagsContainer = NULL;
    this->TagGroupListClass = NULL;
}

void UModioCommonFilteringView::SynchronizeFilterParams_Implementation(const TArray<FString>& PreviouslySelectedTagGroupValues) {
}

bool UModioCommonFilteringView::SetSelectedTagGroupValues_Implementation(const TArray<FString>& TagGroupValues, bool bSelect) {
    return false;
}

void UModioCommonFilteringView::ResetFiltering_Implementation() {
}

bool UModioCommonFilteringView::GetSelectedTagGroupValues_Implementation(TArray<FString>& OutSelectedTagGroupValues) const {
    return false;
}

FModioModCategoryParams UModioCommonFilteringView::GetFilterParamsWrapper_Implementation() const {
    return FModioModCategoryParams{};
}

void UModioCommonFilteringView::AddModTagInfo_Implementation(const FModioModTagInfo& ModTagInfo) {
}


