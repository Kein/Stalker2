#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ModioNotificationParams.h"
#include "OnNotificationExpiredDelegate.h"
#include "ModioUINotification.generated.h"

class UWidget;

UINTERFACE(Blueprintable)
class MODIOUICORE_API UModioUINotification : public UInterface {
    GENERATED_BODY()
};

class MODIOUICORE_API IModioUINotification : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNotificationExpireHandler(const FOnNotificationExpired& InDelegate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWidget* GetAsWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Display();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ConfigureManual(const FText& Title, const FText& message, bool bIsError);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Configure(const FModioNotificationParams& Params);
    
};

