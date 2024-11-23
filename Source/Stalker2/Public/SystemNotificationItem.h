#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHintType.h"
#include "NotificationModel.h"
#include "WidgetBase.h"
#include "SystemNotificationItem.generated.h"

class UBorder;
class UHintInputController;
class UHorizontalBox;
class UImage;
class UProgressBar;
class URichTextWidget;
class UTextBlock;
class UWidgetAnimation;
class UWidgetSwitcher;

UCLASS(EditInlineNew)
class STALKER2_API USystemNotificationItem : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool bWasVoiceNotePlayed;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* MoveUpAnim;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* MoveFromDownAnim;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* HideAnim;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* AppearAnim;
    
protected:
    UPROPERTY(Instanced)
    URichTextWidget* Title;
    
    UPROPERTY(Instanced)
    UTextBlock* Description;
    
    UPROPERTY(Instanced)
    UHintInputController* Hint;
    
    UPROPERTY(Instanced)
    UImage* Icon;
    
    UPROPERTY(Instanced)
    UWidgetSwitcher* AudiologSwitcher;
    
    UPROPERTY(Instanced)
    UHorizontalBox* VoiceHorizontalBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UProgressBar* AudiologProgressBar;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UTextBlock* AudiologDuration;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UTextBlock* AudiologCurrentDuration;
    
    UPROPERTY(Instanced)
    UImage* BackgroundBody;
    
    UPROPERTY(Instanced)
    UImage* BackgroundTop;
    
    UPROPERTY(Instanced)
    UImage* BackgroundDown;
    
    UPROPERTY(Instanced)
    UBorder* AppearanceLayer;
    
    UPROPERTY(Instanced)
    UBorder* AppearanceLine;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor General;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor green;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor red;
    
    UPROPERTY(EditDefaultsOnly)
    int32 RegularHeight;
    
    UPROPERTY(EditDefaultsOnly)
    int32 HeightWithHint;
    
    UPROPERTY(EditInstanceOnly)
    FNotificationModel NotificationModel;
    
    UPROPERTY(EditDefaultsOnly)
    FText Play;
    
    UPROPERTY(EditDefaultsOnly)
    FText Stop;
    
    UPROPERTY(EditDefaultsOnly)
    int32 OneLineNotificationAlignment;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EHintType, FString> HintSIDs;
    
    UPROPERTY(EditDefaultsOnly)
    float InactiveHintTransparency;
    
public:
    USystemNotificationItem();

protected:
    UFUNCTION()
    void SetModel();
    
};

