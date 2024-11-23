#pragma once
#include "CoreMinimal.h"
#include "ESystemNotificationIconType.h"
#include "NotificationModel.h"
#include "Templates/SubclassOf.h"
#include "WidgetBase.h"
#include "SystemNotificationWidget.generated.h"

class USystemNotificationItem;
class UTexture2D;
class UVerticalBox;

UCLASS(EditInlineNew)
class STALKER2_API USystemNotificationWidget : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UVerticalBox* VerticalBox;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<ESystemNotificationIconType, TSoftObjectPtr<UTexture2D>> NotificationIcons;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<USystemNotificationItem> SystemNotificationItemClass;
    
    UPROPERTY(EditDefaultsOnly)
    int32 SystemNotificationsMax;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<float> ItemLifespanByIndex;
    
    UPROPERTY(EditDefaultsOnly)
    FString Received;
    
    UPROPERTY(EditDefaultsOnly)
    FString Lost;
    
    UPROPERTY(EditDefaultsOnly)
    FString Coordinates;
    
    UPROPERTY(EditDefaultsOnly)
    FString NewNote;
    
    UPROPERTY(EditDefaultsOnly)
    FString NewStash;
    
    UPROPERTY(EditDefaultsOnly)
    FString NewRegionName;
    
    UPROPERTY(EditDefaultsOnly)
    FString NewBlueprint;
    
    UPROPERTY(EditDefaultsOnly)
    FString MoneyText;
    
    UPROPERTY(EditDefaultsOnly)
    FString EncyclopediaUpdated;
    
    UPROPERTY(EditDefaultsOnly)
    FText TitleFormatForItems;
    
    UPROPERTY(EditDefaultsOnly)
    FText TitleFormat;
    
    UPROPERTY(EditDefaultsOnly)
    float QueueDelay;
    
    UPROPERTY(EditDefaultsOnly)
    float TimerRate;
    
    UPROPERTY(EditDefaultsOnly)
    float MoveUpAnimMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    float AppearAnimMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    float HideAnimMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    int32 WorldMapStashZoom;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaxTitleLen;
    
    UPROPERTY(EditDefaultsOnly)
    FString EndText;
    
public:
    USystemNotificationWidget();

    UFUNCTION()
    void ProceedInput();
    
    UFUNCTION()
    void OnSystemNotificationActionCompleted(const FNotificationModel& Model);
    
    UFUNCTION()
    void NotificationClickHandler();
    
    UFUNCTION()
    void InputCancel();
    
private:
    UFUNCTION()
    void CenterMapOnLocation();
    
};

