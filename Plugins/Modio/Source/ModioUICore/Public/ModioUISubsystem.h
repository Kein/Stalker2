#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "EModioAuthenticationProvider.h"
#include "EModioGallerySize.h"
#include "EModioLogoSize.h"
#include "ModioEmailAuthCode.h"
#include "ModioErrorCode.h"
#include "ModioFilterParams.h"
#include "ModioModID.h"
#include "ModioModCategoryParams.h"
#include "ModioNotificationParams.h"
#include "OnGetModEnabledDelegate.h"
#include "OnModBrowserCloseRequestedDelegate.h"
#include "OnModEnabledChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "ModioUISubsystem.generated.h"

class APlayerController;
class IModioUINotification;
class UModioUINotification;
class UObject;
class UUserWidget;

UCLASS(BlueprintType)
class MODIOUICORE_API UModioUISubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UUserWidget* ModBrowserInstance;
    
public:
    UPROPERTY(BlueprintAssignable)
    FOnModEnabledChanged OnModEnabledChanged;
    
    UPROPERTY(BlueprintReadWrite)
    FOnGetModEnabled GetModEnabledDelegate;
    
    UModioUISubsystem();

protected:
    UFUNCTION()
    void UnsubscribeHandler(FModioErrorCode ErrorCode, FModioModID ID);
    
    UFUNCTION()
    void UninstallHandler(FModioErrorCode ErrorCode, FModioModID ID);
    
    UFUNCTION()
    void SubscriptionHandler(FModioErrorCode ErrorCode, FModioModID ID);
    
public:
    UFUNCTION(BlueprintCallable)
    bool ShowSearchResults(const FModioModCategoryParams& SearchParameters);
    
    UFUNCTION(BlueprintCallable)
    UUserWidget* ShowModBrowserUIForPlayer(TSubclassOf<UUserWidget> MenuClass, APlayerController* Controller, FOnModBrowserCloseRequested OnModBrowserCloseRequestedDelegate);
    
    UFUNCTION(BlueprintCallable)
    void ShowDialog(UObject* DialogDataSource);
    
    UFUNCTION(BlueprintCallable)
    void ShowDetailsForMod(FModioModID ID);
    
    UFUNCTION(BlueprintCallable)
    void RequestUserAvatar();
    
    UFUNCTION(BlueprintCallable)
    void RequestSubscriptionForModID(FModioModID ID);
    
    UFUNCTION(BlueprintCallable)
    void RequestRemoveSubscriptionForModID(FModioModID ID);
    
    UFUNCTION(BlueprintCallable)
    void RequestModInfoForModIDs(TArray<FModioModID> IDs);
    
    UFUNCTION(BlueprintCallable)
    bool RequestModEnabledState(FModioModID ID, bool bNewEnabledState);
    
    UFUNCTION(BlueprintCallable)
    void RequestLogoDownloadForModID(FModioModID ID, EModioLogoSize LogoSize);
    
    UFUNCTION(BlueprintCallable)
    void RequestListAllMods(FModioFilterParams Params, const FString& RequestIdentifier);
    
    UFUNCTION(BlueprintCallable)
    void RequestGalleryImageDownloadForModID(FModioModID ID, int32 Index, EModioGallerySize ImageSize);
    
    UFUNCTION(BlueprintCallable)
    void RequestExternalAuthentication(EModioAuthenticationProvider Provider);
    
    UFUNCTION(BlueprintCallable)
    void RequestEmailAuthentication(FModioEmailAuthCode Code);
    
    UFUNCTION(BlueprintCallable)
    bool QueryIsModEnabled(FModioModID ID);
    
    UFUNCTION(BlueprintCallable)
    void HideModBrowserUI();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsCollectionModDisableUIEnabled();
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentDPIScaleValue();
    
    UFUNCTION(BlueprintCallable)
    FText FormatText(FText Input);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteOnModBrowserCloseRequestedDelegate();
    
    UFUNCTION(BlueprintCallable)
    void DisplayNotificationParams(const FModioNotificationParams& Params);
    
    UFUNCTION(BlueprintCallable)
    void DisplayNotificationManual(FText Title, FText message, bool bIsError);
    
    UFUNCTION(BlueprintCallable)
    void DisplayNotification(UPARAM(Ref) TScriptInterface<IModioUINotification>& Notification);
    
    UFUNCTION(BlueprintCallable)
    void DisplayErrorDialog(FModioErrorCode ErrorCode);
    
    UFUNCTION(BlueprintCallable)
    void CloseModBrowserUI();
    
};

