#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonNotificationWidgetStyle.generated.h"

class UModioCommonBorderStyle;
class UModioCommonImageStyle;
class UModioCommonRichTextStyle;

UCLASS(Abstract, BlueprintType)
class MODIOUI_API UModioCommonNotificationWidgetStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UModioCommonBorderStyle> BackgroundBorderStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UModioCommonBorderStyle> StatusBackgroundBorderStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UModioCommonImageStyle> StatusIndicatorImageStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UModioCommonRichTextStyle> NotificationTitleTextStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UModioCommonRichTextStyle> NotificationMessageTextStyle;
    
    UModioCommonNotificationWidgetStyle();

};

