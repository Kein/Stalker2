#pragma once
#include "CoreMinimal.h"
#include "ENoteType.h"
#include "PDASlotPanelBase.h"
#include "SlotFilterSettings.h"
#include "PDANotePanel.generated.h"

class USizeBox;

UCLASS(EditInlineNew)
class STALKER2_API UPDANotePanel : public UPDASlotPanelBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    USizeBox* AbsentNoteSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<ENoteType, FSlotFilterSettings> SlotFilterSettings;
    
    UPDANotePanel();

};

