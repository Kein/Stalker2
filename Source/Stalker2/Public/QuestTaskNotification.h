#pragma once
#include "CoreMinimal.h"
#include "EQuestTaskAnimationType.h"
#include "WidgetBase.h"
#include "QuestTaskNotification.generated.h"

class UImage;
class URichTextWidget;
class UWidgetAnimation;
class UWidgetSwitcher;

UCLASS(EditInlineNew)
class STALKER2_API UQuestTaskNotification : public UWidgetBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAnimStarted);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAnimFinished);
    
    UPROPERTY(Instanced)
    URichTextWidget* TextWidget;
    
    UPROPERTY(Instanced)
    UImage* TrackingStage;
    
    UPROPERTY(Instanced)
    UImage* CanceledStage;
    
    UPROPERTY(Instanced)
    UImage* FailedStage;
    
    UPROPERTY(Instanced)
    UImage* FinishedStage;
    
    UPROPERTY(Instanced)
    UImage* UntrackingStage;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* AppearAnim;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* FailAnim;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* FinishedAnim;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* CancelAnim;
    
    UPROPERTY()
    UWidgetAnimation* LastAnim;
    
private:
    UPROPERTY(Instanced)
    UWidgetSwitcher* QuestStateSwitcher;
    
public:
    UQuestTaskNotification();

    UFUNCTION(BlueprintImplementableEvent)
    void PostPlayTaskAnimation(const EQuestTaskAnimationType AnimationType);
    
    UFUNCTION(BlueprintCallable)
    void PlayTaskAnimation(const EQuestTaskAnimationType AnimationType, const bool bWithSound);
    
};

