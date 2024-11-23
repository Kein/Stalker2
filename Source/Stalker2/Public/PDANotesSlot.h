#pragma once
#include "CoreMinimal.h"
#include "OnNoteSlotClickDelegate.h"
#include "PDASlotBase.h"
#include "PDANotesSlot.generated.h"

UCLASS(EditInlineNew)
class STALKER2_API UPDANotesSlot : public UPDASlotBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnNoteSlotClick OnNoteSlotClick;
    
    UPDANotesSlot();

};

