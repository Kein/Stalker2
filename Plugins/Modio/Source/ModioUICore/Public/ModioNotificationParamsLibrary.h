#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ModioErrorCode.h"
#include "ModioNotificationParams.h"
#include "ModioNotificationParamsLibrary.generated.h"

class IModioModInfoUIDetails;
class UModioModInfoUIDetails;

UCLASS(BlueprintType)
class MODIOUICORE_API UModioNotificationParamsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModioNotificationParamsLibrary();

    UFUNCTION(BlueprintCallable)
    static FModioNotificationParams SetTextArg(UPARAM(Ref) FModioNotificationParams& NotificationParams, const FString& Name, const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    static FModioNotificationParams SetStringArg(UPARAM(Ref) FModioNotificationParams& NotificationParams, const FString& Name, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static FModioNotificationParams SetIntegerArg(UPARAM(Ref) FModioNotificationParams& NotificationParams, const FString& Name, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static FModioNotificationParams SetFloatArg(UPARAM(Ref) FModioNotificationParams& NotificationParams, const FString& Name, float Value);
    
    UFUNCTION(BlueprintCallable)
    static FModioNotificationParams CreateUnsubscriptionNotification(FModioErrorCode StatusCode, const TScriptInterface<IModioModInfoUIDetails>& ModInfo);
    
    UFUNCTION(BlueprintCallable)
    static FModioNotificationParams CreateUninstallNotification(FModioErrorCode StatusCode, const TScriptInterface<IModioModInfoUIDetails>& ModInfo);
    
    UFUNCTION(BlueprintCallable)
    static FModioNotificationParams CreateSubscriptionNotification(FModioErrorCode StatusCode, const TScriptInterface<IModioModInfoUIDetails>& ModInfo);
    
    UFUNCTION(BlueprintCallable)
    static FModioNotificationParams CreateRatingNotification(FModioErrorCode StatusCode, const TScriptInterface<IModioModInfoUIDetails>& ModInfo);
    
    UFUNCTION(BlueprintCallable)
    static FModioNotificationParams CreateNotificationParams(FModioErrorCode StatusCode, const FText& TitleText, const FText& SuccessText, const FText& ErrorText);
    
    UFUNCTION(BlueprintCallable)
    static FModioNotificationParams CreateInstallationNotification(FModioErrorCode StatusCode, const TScriptInterface<IModioModInfoUIDetails>& ModInfo);
    
    UFUNCTION(BlueprintCallable)
    static FModioNotificationParams AddFormatText(UPARAM(Ref) FModioNotificationParams& NotificationParams, const FName& Name, const FText& Text);
    
};

