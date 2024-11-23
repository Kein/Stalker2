#pragma once
#include "CoreMinimal.h"
#include "IconSettings.h"
#include "Templates/SubclassOf.h"
#include "WidgetBase.h"
#include "ItemSlotBaseWidget.generated.h"

class UImageWidget;
class UItemSlotState;
class UOverlay;

UCLASS(EditInlineNew)
class STALKER2_API UItemSlotBaseWidget : public UWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SlotIndex;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UOverlay* ItemAndAttachesOverlay;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UOverlay* AttachesOverlay;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UImageWidget* ItemImage;
    
    UPROPERTY(Instanced)
    UItemSlotState* SlotState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIconSettings IconSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UImageWidget> AttachImageWidgetClass;
    
    UPROPERTY(Instanced)
    TArray<UImageWidget*> AttachesImages;
    
public:
    UItemSlotBaseWidget();

};

