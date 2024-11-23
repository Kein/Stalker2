#include "ModioSubsystem.h"

UModioSubsystem::UModioSubsystem() {
}

void UModioSubsystem::SetLogLevel(EModioLogLevel UnrealLogLevel) {
}

void UModioSubsystem::RunPendingHandlers() {
}

TMap<FModioModID, FModioModCollectionEntry> UModioSubsystem::QueryUserSubscriptions() {
    return TMap<FModioModID, FModioModCollectionEntry>();
}

TMap<FModioModID, FModioModCollectionEntry> UModioSubsystem::QueryUserInstallations(bool bIncludeOutdatedMods) {
    return TMap<FModioModID, FModioModCollectionEntry>();
}

TMap<FModioModID, FModioModCollectionEntry> UModioSubsystem::QuerySystemInstallations() {
    return TMap<FModioModID, FModioModCollectionEntry>();
}

FModioErrorCode UModioSubsystem::PrioritizeTransferForMod(FModioModID ModToPrioritize) {
    return FModioErrorCode{};
}

void UModioSubsystem::KillBackgroundThread() {
}

void UModioSubsystem::K2_VerifyUserAuthenticationAsync(FOnErrorOnlyDelegate Callback) {
}

void UModioSubsystem::K2_UnsubscribeFromModAsync(FModioModID ModToUnsubscribeFrom, FOnErrorOnlyDelegate OnUnsubscribeComplete) {
}

void UModioSubsystem::K2_UnmuteUserAsync(FModioUserID userId, FOnErrorOnlyDelegate Callback) {
}

void UModioSubsystem::K2_SubscribeToModAsync(FModioModID ModToSubscribeTo, FOnErrorOnlyDelegate OnSubscribeComplete) {
}

void UModioSubsystem::K2_SubmitNewModFileForMod(FModioModID Mod, FModioCreateModFileParams Params) {
}

void UModioSubsystem::K2_SubmitNewModAsync(FModioModCreationHandle Handle, FModioCreateModParams Params, FOnSubmitNewModDelegate Callback) {
}

void UModioSubsystem::K2_SubmitModRatingAsync(FModioModID Mod, EModioRating Rating, FOnErrorOnlyDelegate Callback) {
}

void UModioSubsystem::K2_SubmitModChangesAsync(FModioModID Mod, FModioEditModParams Params, FOnGetModInfoDelegate Callback) {
}

void UModioSubsystem::K2_ShutdownAsync(FOnErrorOnlyDelegate OnShutdownComplete) {
}

void UModioSubsystem::K2_SetLanguage(EModioLanguage Locale) {
}

void UModioSubsystem::K2_RequestEmailAuthCodeAsync(const FModioEmailAddress& EmailAddress, FOnErrorOnlyDelegate Callback) {
}

void UModioSubsystem::K2_ReportContentAsync(FModioReportParams Report, FOnErrorOnlyDelegate Callback) {
}

FModioOptionalUser UModioSubsystem::K2_QueryUserProfile() {
    return FModioOptionalUser{};
}

FModioOptionalModProgressInfo UModioSubsystem::K2_QueryCurrentModUpdate() {
    return FModioOptionalModProgressInfo{};
}

void UModioSubsystem::K2_PreviewExternalUpdatesAsync(FOnPreviewExternalUpdatesDelegate OnPreviewDone) {
}

void UModioSubsystem::K2_MuteUserAsync(FModioUserID userId, FOnErrorOnlyDelegate Callback) {
}

void UModioSubsystem::K2_ListUserCreatedModsAsync(const FModioFilterParams& Filter, FOnListUserCreatedModsDelegate Callback) {
}

void UModioSubsystem::K2_ListAllModsAsync(const FModioFilterParams& Filter, FOnListAllModsDelegate Callback) {
}

void UModioSubsystem::K2_InitializeAsync(const FModioInitializeOptions& InitializeOptions, FOnErrorOnlyDelegate OnInitComplete) {
}

void UModioSubsystem::K2_GetUserMediaAvatarAsync(EModioAvatarSize AvatarSize, FOnGetMediaDelegate Callback) {
}

void UModioSubsystem::K2_GetTermsOfUseAsync(FOnGetTermsOfUseDelegate Callback) {
}

void UModioSubsystem::K2_GetMutedUsersAsync(FOnMuteUsersDelegate Callback) {
}

void UModioSubsystem::K2_GetModTagOptionsAsync(FOnGetModTagOptionsDelegate Callback) {
}

void UModioSubsystem::K2_GetModMediaLogoAsync(FModioModID ModId, EModioLogoSize LogoSize, FOnGetMediaDelegate Callback) {
}

void UModioSubsystem::K2_GetModMediaGalleryImageAsync(FModioModID ModId, EModioGallerySize GallerySize, int32 Index, FOnGetMediaDelegate Callback) {
}

void UModioSubsystem::K2_GetModMediaAvatarAsync(FModioModID ModId, EModioAvatarSize AvatarSize, FOnGetMediaDelegate Callback) {
}

void UModioSubsystem::K2_GetModInfoAsync(FModioModID ModId, FOnGetModInfoDelegate Callback) {
}

void UModioSubsystem::K2_GetModDependenciesAsync(FModioModID ModId, FOnGetModDependenciesDelegate Callback) {
}

FModioModCreationHandle UModioSubsystem::K2_GetModCreationHandle() {
    return FModioModCreationHandle{};
}

void UModioSubsystem::K2_GetGameInfoAsync(FModioGameID GameId, FOnGetGameInfoDelegate Callback) {
}

FString UModioSubsystem::K2_GetDefaultModInstallationDirectory(FModioGameID GameId) {
    return TEXT("");
}

void UModioSubsystem::K2_ForceUninstallModAsync(FModioModID ModToRemove, FOnErrorOnlyDelegate Callback) {
}

void UModioSubsystem::K2_FetchExternalUpdatesAsync(FOnErrorOnlyDelegate OnFetchDone) {
}

FModioErrorCode UModioSubsystem::K2_EnableModManagement(FOnModManagementDelegate Callback) {
    return FModioErrorCode{};
}

void UModioSubsystem::K2_ClearUserDataAsync(FOnErrorOnlyDelegate Callback) {
}

void UModioSubsystem::K2_AuthenticateUserExternalAsync(const FModioAuthenticationParams& User, EModioAuthenticationProvider Provider, FOnErrorOnlyDelegate Callback) {
}

void UModioSubsystem::K2_AuthenticateUserEmailAsync(const FModioEmailAuthCode& AuthenticationCode, FOnErrorOnlyDelegate Callback) {
}

void UModioSubsystem::K2_ArchiveModAsync(FModioModID Mod, FOnErrorOnlyDelegate Callback) {
}

bool UModioSubsystem::IsUsingBackgroundThread() {
    return false;
}

bool UModioSubsystem::IsModManagementBusy() {
    return false;
}

TArray<FModioValidationError> UModioSubsystem::GetLastValidationError() {
    return TArray<FModioValidationError>();
}

void UModioSubsystem::DisableModManagement() {
}


