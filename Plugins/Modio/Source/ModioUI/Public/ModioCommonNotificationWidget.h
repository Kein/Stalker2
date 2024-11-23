#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ModioCommonNotificationWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonNotificationWidget.generated.h"

class UModioCommonBorder;
class UModioCommonImage;
class UModioCommonNotificationWidgetStyle;
class UModioCommonRichTextBlock;

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonNotificationWidget : public UModioCommonNotificationWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonNotificationWidgetStyle> ModioStyle;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonBorder* BackgroundBorder;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonBorder* StatusBackgroundBorder;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonImage* StatusIndicatorImage;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonRichTextBlock* NotificationTitleTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonRichTextBlock* NotificationMessageTextBlock;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FDateTime StartTime;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bDisplayStarted;
    
public:
    UModioCommonNotificationWidget();

    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonNotificationWidgetStyle> InStyle);
    
};

