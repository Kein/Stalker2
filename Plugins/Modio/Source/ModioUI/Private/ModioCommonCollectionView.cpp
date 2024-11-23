#include "ModioCommonCollectionView.h"
#include "Templates/SubclassOf.h"

UModioCommonCollectionView::UModioCommonCollectionView() {
    this->ModioStyle = NULL;
    this->NoResultsContainer = NULL;
    this->NumOfDownloadingModsTextBlock = NULL;
    this->InstalledModsLabelTextBlock = NULL;
    this->InstalledModsDescriptionTextBlock = NULL;
    this->NumOfInstalledModsTextBlock = NULL;
    this->ErrorsTextBlock = NULL;
    this->NumOfErrorsTextBlock = NULL;
    this->ModList = NULL;
    this->FetchUpdateButton = NULL;
    this->FilterButton = NULL;
    this->FilterCounterTextBlock = NULL;
}

void UModioCommonCollectionView::UpdateMods_Implementation() {
}

void UModioCommonCollectionView::UpdateInputBindings_Implementation() {
}

void UModioCommonCollectionView::SortZToA(TArray<FModioModCollectionEntry>& ModListEntries) {
}

void UModioCommonCollectionView::SortSizeOnDisk(TArray<FModioModCollectionEntry>& ModListEntries) {
}

void UModioCommonCollectionView::SortRecentlyUpdated(TArray<FModioModCollectionEntry>& ModListEntries) {
}

void UModioCommonCollectionView::SortAToZ(TArray<FModioModCollectionEntry>& ModListEntries) {
}

void UModioCommonCollectionView::ShowSearchView_Implementation() {
}

void UModioCommonCollectionView::SetStyle(TSubclassOf<UModioCommonCollectionViewStyle> InStyle) {
}

void UModioCommonCollectionView::SetNoResultsVisibility_Implementation(bool bVisible) {
}

void UModioCommonCollectionView::SetDefaultCategoryFilterParams_Implementation(bool bUserAuthenticated) {
}

void UModioCommonCollectionView::OnFetchUpdatesClicked_Implementation() {
}

void UModioCommonCollectionView::OnFetchExternalCompleted_Implementation(FModioErrorCode ErrorCode) {
}

void UModioCommonCollectionView::ApplySortingAndFiltering(TArray<FModioModCollectionEntry>& ModListEntries) {
}


