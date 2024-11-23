#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ModioNotificationParams.h"
#include "ModioUINotificationController.generated.h"

class IModioUINotification;
class UModioUINotification;
class IModioUINotificationController;
class UModioUINotificationController;

UINTERFACE(Blueprintable)
class MODIOUICORE_API UModioUINotificationController : public UInterface {
    GENERATED_BODY()
};

class MODIOUICORE_API IModioUINotificationController : public IInterface {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RegisterUserWidget(const TScriptInterface<IModioUINotificationController>& ControllerWidget);
    
    UFUNCTION()
    virtual void HandleDisplayNotificationWidget(TScriptInterface<IModioUINotification>& Notification) PURE_VIRTUAL(HandleDisplayNotificationWidget,);
    
    UFUNCTION()
    virtual void HandleDisplayNotificationParams(const FModioNotificationParams& Params) PURE_VIRTUAL(HandleDisplayNotificationParams,);
    
    UFUNCTION()
    virtual void HandleDisplayManual(const FText& Title, const FText& message, bool bIsError) PURE_VIRTUAL(HandleDisplayManual,);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisplayNotificationParams(const FModioNotificationParams& Params);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisplayNotificationManual(const FText& Title, const FText& message, bool bIsError);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisplayNotification(const TScriptInterface<IModioUINotification>& Notification);
    
};

