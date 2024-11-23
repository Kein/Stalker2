#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "WidgetBase.h"
#include "TaskListMenuWidget.generated.h"

class UHorizontalBox;
class UQuestMenuWidget;
class USizeBox;
class UVerticalBox;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UTaskListMenuWidget : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    FVector2f WidgetSize;
    
protected:
    UPROPERTY(Instanced)
    USizeBox* WidgetSizeBox;
    
    UPROPERTY(Instanced)
    UHorizontalBox* MainTasksTitle;
    
    UPROPERTY(Instanced)
    UHorizontalBox* SecondaryTaskTitle;
    
    UPROPERTY(Instanced)
    UVerticalBox* MainTasks;
    
    UPROPERTY(Instanced)
    UVerticalBox* SecondaryTasks;
    
    UPROPERTY(Instanced)
    UVerticalBox* MainTasksBox;
    
    UPROPERTY(Instanced)
    UVerticalBox* SecondaryTasksBox;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UQuestMenuWidget> QuestMenuWidgetClass;
    
public:
    UTaskListMenuWidget();

};

