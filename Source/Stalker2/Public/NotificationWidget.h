#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "NotificationWidget.generated.h"

class UQuestNotification;
class UQuestNotificationDataAsset;
class UVerticalBox;

UCLASS(EditInlineNew)
class STALKER2_API UNotificationWidget : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UQuestNotification* MainQuest;
    
    UPROPERTY(Instanced)
    UQuestNotification* SecondaryQuest;
    
    UPROPERTY(Instanced)
    UVerticalBox* QuestVerticalBox;
    
    UPROPERTY(EditDefaultsOnly, NoClear)
    UQuestNotificationDataAsset* Settings;
    
    UPROPERTY(Instanced, Transient)
    UQuestNotification* NotificationWithActiveHint;
    
public:
    UNotificationWidget();

private:
    UFUNCTION()
    void TryShowNextNotify();
    
    UFUNCTION()
    void HideNotificationSecondary();
    
    UFUNCTION()
    void HideNotificationMain();
    
};

