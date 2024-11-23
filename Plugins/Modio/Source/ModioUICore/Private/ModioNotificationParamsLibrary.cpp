#include "ModioNotificationParamsLibrary.h"

UModioNotificationParamsLibrary::UModioNotificationParamsLibrary() {
}

FModioNotificationParams UModioNotificationParamsLibrary::SetTextArg(FModioNotificationParams& NotificationParams, const FString& Name, const FText& Text) {
    return FModioNotificationParams{};
}

FModioNotificationParams UModioNotificationParamsLibrary::SetStringArg(FModioNotificationParams& NotificationParams, const FString& Name, const FString& Value) {
    return FModioNotificationParams{};
}

FModioNotificationParams UModioNotificationParamsLibrary::SetIntegerArg(FModioNotificationParams& NotificationParams, const FString& Name, int32 Value) {
    return FModioNotificationParams{};
}

FModioNotificationParams UModioNotificationParamsLibrary::SetFloatArg(FModioNotificationParams& NotificationParams, const FString& Name, float Value) {
    return FModioNotificationParams{};
}

FModioNotificationParams UModioNotificationParamsLibrary::CreateUnsubscriptionNotification(FModioErrorCode StatusCode, const TScriptInterface<IModioModInfoUIDetails>& ModInfo) {
    return FModioNotificationParams{};
}

FModioNotificationParams UModioNotificationParamsLibrary::CreateUninstallNotification(FModioErrorCode StatusCode, const TScriptInterface<IModioModInfoUIDetails>& ModInfo) {
    return FModioNotificationParams{};
}

FModioNotificationParams UModioNotificationParamsLibrary::CreateSubscriptionNotification(FModioErrorCode StatusCode, const TScriptInterface<IModioModInfoUIDetails>& ModInfo) {
    return FModioNotificationParams{};
}

FModioNotificationParams UModioNotificationParamsLibrary::CreateRatingNotification(FModioErrorCode StatusCode, const TScriptInterface<IModioModInfoUIDetails>& ModInfo) {
    return FModioNotificationParams{};
}

FModioNotificationParams UModioNotificationParamsLibrary::CreateNotificationParams(FModioErrorCode StatusCode, const FText& TitleText, const FText& SuccessText, const FText& ErrorText) {
    return FModioNotificationParams{};
}

FModioNotificationParams UModioNotificationParamsLibrary::CreateInstallationNotification(FModioErrorCode StatusCode, const TScriptInterface<IModioModInfoUIDetails>& ModInfo) {
    return FModioNotificationParams{};
}

FModioNotificationParams UModioNotificationParamsLibrary::AddFormatText(FModioNotificationParams& NotificationParams, const FName& Name, const FText& Text) {
    return FModioNotificationParams{};
}


