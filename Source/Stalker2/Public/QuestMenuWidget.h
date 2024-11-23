#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "Templates/SubclassOf.h"
#include "WidgetBase.h"
#include "QuestMenuWidget.generated.h"

class UTaskIcon;
class UTaskMenuWidget;
class UTextWidget;
class UVerticalBox;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UQuestMenuWidget : public UWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UTaskIcon* QuestIcon;
    
    UPROPERTY(Instanced)
    UTextWidget* QuestName;
    
    UPROPERTY(Instanced)
    UTextWidget* QuestLocation;
    
    UPROPERTY(Instanced)
    UVerticalBox* QuestTaskList;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTaskMenuWidget> TaskMenuWidgetClass;
    
    UPROPERTY(EditDefaultsOnly)
    FMargin TaskSlotPadding;
    
    UPROPERTY(EditDefaultsOnly)
    FName MainQuestStyleID;
    
    UPROPERTY(EditDefaultsOnly)
    FName SecondaryQuestStyleID;
    
    UPROPERTY(EditDefaultsOnly)
    int32 TaskCap;
    
public:
    UQuestMenuWidget();

};

