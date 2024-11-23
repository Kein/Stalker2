#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EDpadNavigation.h"
#include "ItemSelectorSlotBase.h"
#include "ItemSelectorEquipSlot.generated.h"

class UHintSwitcher;
class UOverlay;
class USizeBox;

UCLASS(EditInlineNew)
class STALKER2_API UItemSelectorEquipSlot : public UItemSelectorSlotBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UOverlay* SlotHighlight;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UOverlay* SlotHighlightWhite;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    USizeBox* SlotSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString InputActionName;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UHintSwitcher* HintSwitcher;
    
    UPROPERTY(EditAnywhere)
    EDpadNavigation DpadNavigation;
    
    UPROPERTY(EditAnywhere)
    bool bIsAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 IndexEquipSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D SlotSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool FlipHintLetter;
    
    UItemSelectorEquipSlot();

};

