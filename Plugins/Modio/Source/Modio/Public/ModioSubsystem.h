#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "EModioAuthenticationProvider.h"
#include "EModioAvatarSize.h"
#include "EModioGallerySize.h"
#include "EModioLanguage.h"
#include "EModioLogLevel.h"
#include "EModioLogoSize.h"
#include "EModioRating.h"
#include "ModioAuthenticationParams.h"
#include "ModioCreateModFileParams.h"
#include "ModioCreateModParams.h"
#include "ModioEditModParams.h"
#include "ModioEmailAddress.h"
#include "ModioEmailAuthCode.h"
#include "ModioErrorCode.h"
#include "ModioFilterParams.h"
#include "ModioGameID.h"
#include "ModioInitializeOptions.h"
#include "ModioModCollectionEntry.h"
#include "ModioModCreationHandle.h"
#include "ModioModID.h"
#include "ModioOptionalModProgressInfo.h"
#include "ModioOptionalUser.h"
#include "ModioReportParams.h"
#include "ModioUserID.h"
#include "ModioValidationError.h"
#include "OnErrorOnlyDelegateDelegate.h"
#include "OnGetGameInfoDelegateDelegate.h"
#include "OnGetMediaDelegateDelegate.h"
#include "OnGetModDependenciesDelegateDelegate.h"
#include "OnGetModInfoDelegateDelegate.h"
#include "OnGetModTagOptionsDelegateDelegate.h"
#include "OnGetTermsOfUseDelegateDelegate.h"
#include "OnListAllModsDelegateDelegate.h"
#include "OnListUserCreatedModsDelegateDelegate.h"
#include "OnModManagementDelegateDelegate.h"
#include "OnMuteUsersDelegateDelegate.h"
#include "OnPreviewExternalUpdatesDelegateDelegate.h"
#include "OnSubmitNewModDelegateDelegate.h"
#include "ModioSubsystem.generated.h"

UCLASS(BlueprintType, MinimalAPI)
class UModioSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<FModioModID, FModioModCollectionEntry> UserSubscriptionsDefaultValue;
    
    UPROPERTY()
    TMap<FModioModID, FModioModCollectionEntry> QueryUserInstallationsDefaultValue;
    
public:
    UModioSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetLogLevel(EModioLogLevel UnrealLogLevel);
    
    UFUNCTION(BlueprintCallable)
    void RunPendingHandlers();
    
    UFUNCTION(BlueprintPure)
    TMap<FModioModID, FModioModCollectionEntry> QueryUserSubscriptions();
    
    UFUNCTION(BlueprintPure)
    TMap<FModioModID, FModioModCollectionEntry> QueryUserInstallations(bool bIncludeOutdatedMods);
    
    UFUNCTION(BlueprintPure)
    TMap<FModioModID, FModioModCollectionEntry> QuerySystemInstallations();
    
    UFUNCTION(BlueprintCallable)
    FModioErrorCode PrioritizeTransferForMod(FModioModID ModToPrioritize);
    
    UFUNCTION(BlueprintCallable)
    void KillBackgroundThread();
    
    UFUNCTION(BlueprintCallable)
    void K2_VerifyUserAuthenticationAsync(FOnErrorOnlyDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_UnsubscribeFromModAsync(FModioModID ModToUnsubscribeFrom, FOnErrorOnlyDelegate OnUnsubscribeComplete);
    
    UFUNCTION(BlueprintCallable)
    void K2_UnmuteUserAsync(FModioUserID userId, FOnErrorOnlyDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_SubscribeToModAsync(FModioModID ModToSubscribeTo, FOnErrorOnlyDelegate OnSubscribeComplete);
    
    UFUNCTION(BlueprintCallable)
    void K2_SubmitNewModFileForMod(FModioModID Mod, FModioCreateModFileParams Params);
    
    UFUNCTION(BlueprintCallable)
    void K2_SubmitNewModAsync(FModioModCreationHandle Handle, FModioCreateModParams Params, FOnSubmitNewModDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_SubmitModRatingAsync(FModioModID Mod, EModioRating Rating, FOnErrorOnlyDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_SubmitModChangesAsync(FModioModID Mod, FModioEditModParams Params, FOnGetModInfoDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_ShutdownAsync(FOnErrorOnlyDelegate OnShutdownComplete);
    
    UFUNCTION(BlueprintCallable)
    void K2_SetLanguage(EModioLanguage Locale);
    
    UFUNCTION(BlueprintCallable)
    void K2_RequestEmailAuthCodeAsync(const FModioEmailAddress& EmailAddress, FOnErrorOnlyDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_ReportContentAsync(FModioReportParams Report, FOnErrorOnlyDelegate Callback);
    
    UFUNCTION(BlueprintPure)
    FModioOptionalUser K2_QueryUserProfile();
    
    UFUNCTION(BlueprintPure)
    FModioOptionalModProgressInfo K2_QueryCurrentModUpdate();
    
    UFUNCTION(BlueprintCallable)
    void K2_PreviewExternalUpdatesAsync(FOnPreviewExternalUpdatesDelegate OnPreviewDone);
    
    UFUNCTION(BlueprintCallable)
    void K2_MuteUserAsync(FModioUserID userId, FOnErrorOnlyDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_ListUserCreatedModsAsync(const FModioFilterParams& Filter, FOnListUserCreatedModsDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_ListAllModsAsync(const FModioFilterParams& Filter, FOnListAllModsDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_InitializeAsync(const FModioInitializeOptions& InitializeOptions, FOnErrorOnlyDelegate OnInitComplete);
    
    UFUNCTION(BlueprintCallable)
    void K2_GetUserMediaAvatarAsync(EModioAvatarSize AvatarSize, FOnGetMediaDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_GetTermsOfUseAsync(FOnGetTermsOfUseDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_GetMutedUsersAsync(FOnMuteUsersDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_GetModTagOptionsAsync(FOnGetModTagOptionsDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_GetModMediaLogoAsync(FModioModID ModId, EModioLogoSize LogoSize, FOnGetMediaDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_GetModMediaGalleryImageAsync(FModioModID ModId, EModioGallerySize GallerySize, int32 Index, FOnGetMediaDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_GetModMediaAvatarAsync(FModioModID ModId, EModioAvatarSize AvatarSize, FOnGetMediaDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_GetModInfoAsync(FModioModID ModId, FOnGetModInfoDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_GetModDependenciesAsync(FModioModID ModId, FOnGetModDependenciesDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    FModioModCreationHandle K2_GetModCreationHandle();
    
    UFUNCTION(BlueprintCallable)
    void K2_GetGameInfoAsync(FModioGameID GameId, FOnGetGameInfoDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static FString K2_GetDefaultModInstallationDirectory(FModioGameID GameId);
    
    UFUNCTION(BlueprintCallable)
    void K2_ForceUninstallModAsync(FModioModID ModToRemove, FOnErrorOnlyDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_FetchExternalUpdatesAsync(FOnErrorOnlyDelegate OnFetchDone);
    
    UFUNCTION(BlueprintCallable)
    FModioErrorCode K2_EnableModManagement(FOnModManagementDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_ClearUserDataAsync(FOnErrorOnlyDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_AuthenticateUserExternalAsync(const FModioAuthenticationParams& User, EModioAuthenticationProvider Provider, FOnErrorOnlyDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_AuthenticateUserEmailAsync(const FModioEmailAuthCode& AuthenticationCode, FOnErrorOnlyDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_ArchiveModAsync(FModioModID Mod, FOnErrorOnlyDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    bool IsUsingBackgroundThread();
    
    UFUNCTION(BlueprintCallable)
    bool IsModManagementBusy();
    
    UFUNCTION(BlueprintCallable)
    TArray<FModioValidationError> GetLastValidationError();
    
    UFUNCTION(BlueprintCallable)
    void DisableModManagement();
    
};

