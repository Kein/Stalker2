#pragma once
#include "CoreMinimal.h"
#include "InteractableItemSlotBaseWidget.h"
#include "CustomGridSlot.generated.h"

class UImage;
class USizeBox;
class UTextWidget;

UCLASS(EditInlineNew)
class STALKER2_API UCustomGridSlot : public UInteractableItemSlotBaseWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* ItemImageSizeBox;
    
    UPROPERTY(Instanced)
    UImage* Background;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* StackAmount;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Broken;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Attach;
    
public:
    UPROPERTY(EditAnywhere)
    int32 MinSlotSize;
    
    UCustomGridSlot();

};

