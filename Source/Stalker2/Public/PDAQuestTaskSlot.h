#pragma once
#include "CoreMinimal.h"
#include "OnHoverTaskSlotDelegate.h"
#include "OnTrackingStageSlotDelegate.h"
#include "TaskStatusSettings.h"
#include "WidgetBase.h"
#include "PDAQuestTaskSlot.generated.h"

class UImage;
class URichTextBlock;
class UWidget;
class UWidgetAnimation;

UCLASS(EditInlineNew)
class STALKER2_API UPDAQuestTaskSlot : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UImage* ImageTask;
    
    UPROPERTY(Instanced)
    UWidget* HoverImage;
    
    UPROPERTY(Instanced)
    URichTextBlock* RichText;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* ClickAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString NotNecessaryStyleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString NotNecessaryLocalizationSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ClickAnimSpeed;
    
    UPROPERTY(BlueprintAssignable)
    FOnTrackingStageSlot OnTrackingStage;
    
    UPROPERTY(BlueprintAssignable)
    FOnHoverTaskSlot OnHoverTaskSlot;
    
private:
    UPROPERTY()
    FTaskStatusSettings SlotData;
    
public:
    UPDAQuestTaskSlot();

};

