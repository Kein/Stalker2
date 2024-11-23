#pragma once
#include "CoreMinimal.h"
#include "EUISound.h"
#include "WidgetBase.h"
#include "QuestNotification.generated.h"

class UHintInputController;
class UImage;
class UQuestNotificationDataAsset;
class UQuestTaskNotification;
class UTextWidget;
class UVerticalBox;
class UWidgetAnimation;
class UWorldMapTooltipHeader;

UCLASS(EditInlineNew)
class STALKER2_API UQuestNotification : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, Transient)
    TArray<UQuestTaskNotification*> TaskWidgets;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName TextureID;
    
private:
    UPROPERTY(Instanced)
    UTextWidget* QuestTitle;
    
    UPROPERTY(Instanced)
    UImage* QuestImage;
    
    UPROPERTY(Instanced)
    UWorldMapTooltipHeader* QuestNotificationHeader;
    
    UPROPERTY(Instanced)
    UImage* LabelBackground;
    
    UPROPERTY(Instanced)
    UImage* ContentLine;
    
    UPROPERTY(Instanced)
    UTextWidget* LabelText;
    
    UPROPERTY(Instanced)
    UHintInputController* Hint;
    
    UPROPERTY(Instanced)
    UVerticalBox* QuestVerticalBox;
    
    UPROPERTY(Transient)
    UWidgetAnimation* ShowAnimation;
    
    UPROPERTY(Transient)
    UWidgetAnimation* HideAnimation;
    
    UPROPERTY(EditAnywhere)
    bool bMainQuest;
    
    UPROPERTY(EditInstanceOnly)
    EUISound QuestAddedSound;
    
    UPROPERTY(EditInstanceOnly)
    EUISound QuestCompletedSound;
    
    UPROPERTY(Instanced, Transient)
    UQuestTaskNotification* LastUpdatedTask;
    
    UPROPERTY(EditDefaultsOnly, NoClear)
    UQuestNotificationDataAsset* Settings;
    
    UPROPERTY(Transient)
    FString PrototypeID;
    
    UPROPERTY(Transient)
    int32 QuestStagesLen;
    
    UPROPERTY(Transient)
    bool bTaskAnimationWasFinished;
    
    UPROPERTY(Transient)
    bool bTaskAnimationWasStarted;
    
public:
    UQuestNotification();

    UFUNCTION()
    void HideTasks();
    
};

