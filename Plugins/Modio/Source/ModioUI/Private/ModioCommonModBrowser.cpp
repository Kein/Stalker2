#include "ModioCommonModBrowser.h"
#include "Templates/SubclassOf.h"

UModioCommonModBrowser::UModioCommonModBrowser() {
    this->NotificationController = NULL;
    this->UserProfile = NULL;
    this->TabList = NULL;
    this->ContentStack = NULL;
    this->AuthStack = NULL;
    this->ReportStack = NULL;
    this->RightTabStack = NULL;
    this->DialogStack = NULL;
    this->ActionBar = NULL;
}

bool UModioCommonModBrowser::ShowSearchView_Implementation(EModioCommonSearchViewType SearchType, const FModioModCategoryParams& CurrentFilterParams) {
    return false;
}

bool UModioCommonModBrowser::ShowQuickAccessView_Implementation() {
    return false;
}

bool UModioCommonModBrowser::ShowModDetailsView_Implementation(const FModioModInfo& ModInfo) {
    return false;
}

bool UModioCommonModBrowser::ShowFeaturedView_Implementation() {
    return false;
}

bool UModioCommonModBrowser::ShowCollectionView_Implementation() {
    return false;
}

void UModioCommonModBrowser::RemoveTab_Implementation(FName TabNameID) {
}

bool UModioCommonModBrowser::HideSearchView_Implementation() {
    return false;
}

bool UModioCommonModBrowser::HideReportMod_Implementation() {
    return false;
}

bool UModioCommonModBrowser::HideQuickAccessView_Implementation() {
    return false;
}

bool UModioCommonModBrowser::HideModDetailsView_Implementation() {
    return false;
}

bool UModioCommonModBrowser::HideFeaturedView_Implementation() {
    return false;
}

bool UModioCommonModBrowser::HideCollectionView_Implementation() {
    return false;
}

void UModioCommonModBrowser::HandleViewChanged_Implementation() {
}

bool UModioCommonModBrowser::GetViewFromTabNameID_Implementation(FName TabNameID, TSubclassOf<UModioCommonActivatableWidget>& OutView) const {
    return false;
}

void UModioCommonModBrowser::ClearTabs_Implementation() {
}

bool UModioCommonModBrowser::AddTab_Implementation(FName TabNameID, const FText& TabText, TSubclassOf<UModioCommonActivatableWidget> ContentClass) {
    return false;
}

bool UModioCommonModBrowser::AddEmptyTab_Implementation(FName TabNameID, const FText& TabText) {
    return false;
}

bool UModioCommonModBrowser::AddContentForTab_Implementation(FName TabNameID, TSubclassOf<UModioCommonActivatableWidget> ContentClass, UModioCommonActivatableWidget*& OutContent) {
    return false;
}


