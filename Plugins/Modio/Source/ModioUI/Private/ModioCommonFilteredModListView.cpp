#include "ModioCommonFilteredModListView.h"
#include "Templates/SubclassOf.h"

UModioCommonFilteredModListView::UModioCommonFilteredModListView() {
    this->ModioStyle = NULL;
    this->ModList = NULL;
    this->InitialScreenContainer = NULL;
    this->NoResultsContainer = NULL;
    this->PageNavigationContainer = NULL;
    this->PreviousPageButton = NULL;
    this->NextPageButton = NULL;
    this->CurrentPageTextBlock = NULL;
    this->TotalPagesTextBlock = NULL;
    this->TotalModsTextBlock = NULL;
    this->ModListLoader = NULL;
    this->ErrorWithRetryWidget = NULL;
    this->bHasSearchedBefore = false;
    this->CurrentPageIndex = 0;
    this->TotalMods = 0;
    this->PageSize = 0;
    this->TotalPages = 0;
}

void UModioCommonFilteredModListView::UpdateInputActions_Implementation() {
}

void UModioCommonFilteredModListView::SetStyle(TSubclassOf<UModioCommonFilteredModListViewStyle> InStyle) {
}

void UModioCommonFilteredModListView::SetPageNavigationVisibility_Implementation(bool bIsVisible) {
}

void UModioCommonFilteredModListView::SetNoResultsVisibility_Implementation(bool bIsVisible) {
}

void UModioCommonFilteredModListView::SetInitialScreenVisibility_Implementation(bool bIsVisible) {
}

void UModioCommonFilteredModListView::HandlePreviousPageClicked_Implementation() {
}

void UModioCommonFilteredModListView::HandleNextPageClicked_Implementation() {
}

int32 UModioCommonFilteredModListView::GetNumItemsSelected_Implementation() const {
    return 0;
}

int32 UModioCommonFilteredModListView::GetNumItems_Implementation() const {
    return 0;
}


