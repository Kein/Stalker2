#pragma once
#include "CoreMinimal.h"
#include "EMarkerType.h"
#include "WidgetBase.h"
#include "WorldMapTooltip.generated.h"

class UImage;
class UPanelWidget;
class UPlayerStorageData;
class UTaskMenuWidget;
class UTextWidget;
class UTooltipRecord;
class UUniformGridPanel;
class UWidgetSwitcher;
class UWorldMapTooltipHeader;

UCLASS(EditInlineNew)
class STALKER2_API UWorldMapTooltip : public UWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UWorldMapTooltipHeader* HeaderBackground;
    
    UPROPERTY(Instanced)
    UTextWidget* BodyPlainText;
    
    UPROPERTY(Instanced)
    UWidgetSwitcher* TooltipBodySwitcher;
    
    UPROPERTY(Instanced)
    UWidgetSwitcher* TooltipFooterSwitcher;
    
    UPROPERTY(Instanced)
    UUniformGridPanel* ChildMarkerBox;
    
    UPROPERTY(Instanced)
    UImage* FactionImage;
    
    UPROPERTY(Instanced)
    UTextWidget* SubtitleText;
    
    UPROPERTY(Instanced)
    UTextWidget* TitleText;
    
    UPROPERTY(Instanced)
    UImage* MarkerImage;
    
    UPROPERTY(Instanced)
    UTaskMenuWidget* QuestStage;
    
    UPROPERTY(Instanced)
    UPlayerStorageData* PlayerStorageData;
    
    UPROPERTY(Instanced)
    UTooltipRecord* AnomalyDetails;
    
    UPROPERTY(Instanced)
    UPanelWidget* BodyMainBox;
    
    UPROPERTY(Instanced)
    UPanelWidget* FooterMainBox;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMarkerType, FName> DisplayTooltipTitle;
    
    UPROPERTY(EditDefaultsOnly)
    FName MainQuestColorStyle;
    
    UPROPERTY(EditDefaultsOnly)
    FName SecondaryColorQuestStyle;
    
public:
    UWorldMapTooltip();

};

