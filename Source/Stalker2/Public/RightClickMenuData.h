#pragma once
#include "CoreMinimal.h"
#include "RightClickMenuData.generated.h"

class UItemSlotBaseWidget;

USTRUCT()
struct FRightClickMenuData {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, Transient)
    UItemSlotBaseWidget* ClickedItemSlot;
    
    STALKER2_API FRightClickMenuData();
};

