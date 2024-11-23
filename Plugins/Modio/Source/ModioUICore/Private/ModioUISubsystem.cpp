#include "ModioUISubsystem.h"
#include "Templates/SubclassOf.h"

UModioUISubsystem::UModioUISubsystem() {
    this->ModBrowserInstance = NULL;
}

void UModioUISubsystem::UnsubscribeHandler(FModioErrorCode ErrorCode, FModioModID ID) {
}

void UModioUISubsystem::UninstallHandler(FModioErrorCode ErrorCode, FModioModID ID) {
}

void UModioUISubsystem::SubscriptionHandler(FModioErrorCode ErrorCode, FModioModID ID) {
}

bool UModioUISubsystem::ShowSearchResults(const FModioModCategoryParams& SearchParameters) {
    return false;
}

UUserWidget* UModioUISubsystem::ShowModBrowserUIForPlayer(TSubclassOf<UUserWidget> MenuClass, APlayerController* Controller, FOnModBrowserCloseRequested OnModBrowserCloseRequestedDelegate) {
    return NULL;
}

void UModioUISubsystem::ShowDialog(UObject* DialogDataSource) {
}

void UModioUISubsystem::ShowDetailsForMod(FModioModID ID) {
}

void UModioUISubsystem::RequestUserAvatar() {
}

void UModioUISubsystem::RequestSubscriptionForModID(FModioModID ID) {
}

void UModioUISubsystem::RequestRemoveSubscriptionForModID(FModioModID ID) {
}

void UModioUISubsystem::RequestModInfoForModIDs(TArray<FModioModID> IDs) {
}

bool UModioUISubsystem::RequestModEnabledState(FModioModID ID, bool bNewEnabledState) {
    return false;
}

void UModioUISubsystem::RequestLogoDownloadForModID(FModioModID ID, EModioLogoSize LogoSize) {
}

void UModioUISubsystem::RequestListAllMods(FModioFilterParams Params, const FString& RequestIdentifier) {
}

void UModioUISubsystem::RequestGalleryImageDownloadForModID(FModioModID ID, int32 Index, EModioGallerySize ImageSize) {
}

void UModioUISubsystem::RequestExternalAuthentication(EModioAuthenticationProvider Provider) {
}

void UModioUISubsystem::RequestEmailAuthentication(FModioEmailAuthCode Code) {
}

bool UModioUISubsystem::QueryIsModEnabled(FModioModID ID) {
    return false;
}

void UModioUISubsystem::HideModBrowserUI() {
}

bool UModioUISubsystem::GetIsCollectionModDisableUIEnabled() {
    return false;
}

float UModioUISubsystem::GetCurrentDPIScaleValue() {
    return 0.0f;
}

FText UModioUISubsystem::FormatText(FText Input) {
    return FText::GetEmpty();
}

void UModioUISubsystem::ExecuteOnModBrowserCloseRequestedDelegate() {
}

void UModioUISubsystem::DisplayNotificationParams(const FModioNotificationParams& Params) {
}

void UModioUISubsystem::DisplayNotificationManual(FText Title, FText message, bool bIsError) {
}

void UModioUISubsystem::DisplayNotification(TScriptInterface<IModioUINotification>& Notification) {
}

void UModioUISubsystem::DisplayErrorDialog(FModioErrorCode ErrorCode) {
}

void UModioUISubsystem::CloseModBrowserUI() {
}


