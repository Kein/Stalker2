#pragma once
#include "CoreMinimal.h"
#include "ItemSlotBaseWidget.h"
#include "ItemDragWidget.generated.h"

class UBorder;
class UImage;
class USizeBox;

UCLASS(EditInlineNew)
class STALKER2_API UItemDragWidget : public UItemSlotBaseWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    USizeBox* ItemImageSizeBox;
    
    UPROPERTY(Instanced)
    UImage* Background;
    
    UPROPERTY(Instanced)
    UBorder* Border;
    
    UPROPERTY(Transient)
    int32 ReturnEquipSlot;
    
public:
    UItemDragWidget();

};

