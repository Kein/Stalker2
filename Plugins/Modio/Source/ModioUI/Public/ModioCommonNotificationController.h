#pragma once
#include "CoreMinimal.h"
#include "ModioNotificationParams.h"
#include "ModioUINotificationController.h"
#include "ModioCommonActivatableWidget.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonNotificationController.generated.h"

class IModioUINotification;
class UModioUINotification;
class UPanelWidget;
class UUserWidget;
class UWidget;

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonNotificationController : public UModioCommonActivatableWidget, public IModioUINotificationController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxNotificationsOnScreen;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UUserWidget> ErrorNotificationClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UUserWidget> SuccessNotificationClass;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UPanelWidget* NotificationList;
    
public:
    UModioCommonNotificationController();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNotificationExpired(UWidget* Notification);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void HandleDisplayNotificationWidget(TScriptInterface<IModioUINotification>& Notification) override PURE_VIRTUAL(HandleDisplayNotificationWidget,);
    
    UFUNCTION()
    void HandleDisplayNotificationParams(const FModioNotificationParams& Params) override PURE_VIRTUAL(HandleDisplayNotificationParams,);
    
    UFUNCTION()
    void HandleDisplayManual(const FText& Title, const FText& message, bool bIsError) override PURE_VIRTUAL(HandleDisplayManual,);
    
};

