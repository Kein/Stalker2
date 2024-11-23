#pragma once
#include "CoreMinimal.h"
#include "OnChangeSlotSelectQuestDelegate.h"
#include "OnQuestSlotClickDelegate.h"
#include "PDASlotBase.h"
#include "PDAQuestSlot.generated.h"

class UTextWidget;

UCLASS(EditInlineNew)
class STALKER2_API UPDAQuestSlot : public UPDASlotBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UTextWidget* RegionText;
    
    UPROPERTY(Instanced)
    UTextWidget* PlayText;
    
    UPROPERTY(BlueprintAssignable)
    FOnQuestSlotClick OnQuestSlotClick;
    
    UPROPERTY(BlueprintAssignable)
    FOnChangeSlotSelectQuest OnChangeSlotSelectQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SelectStageHoverOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString HintLocalizationSIDEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString HintLocalizationSIDDisabled;
    
    UPDAQuestSlot();

};

