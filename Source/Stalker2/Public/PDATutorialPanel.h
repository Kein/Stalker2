#pragma once
#include "CoreMinimal.h"
#include "EPDATutorialCategory.h"
#include "PDASlotPanelBase.h"
#include "SlotFilterSettings.h"
#include "PDATutorialPanel.generated.h"

class USizeBox;

UCLASS(EditInlineNew)
class STALKER2_API UPDATutorialPanel : public UPDASlotPanelBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    USizeBox* AbsentTutorialSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EPDATutorialCategory, FSlotFilterSettings> SlotFilterSettings;
    
    UPDATutorialPanel();

};

