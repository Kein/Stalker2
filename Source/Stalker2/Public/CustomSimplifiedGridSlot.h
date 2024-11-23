#pragma once
#include "CoreMinimal.h"
#include "ItemSlotBaseWidget.h"
#include "CustomSimplifiedGridSlot.generated.h"

class UImage;
class USizeBox;
class UTextWidget;

UCLASS(EditInlineNew)
class STALKER2_API UCustomSimplifiedGridSlot : public UItemSlotBaseWidget {
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
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Quest;
    
public:
    UPROPERTY(EditAnywhere)
    int32 MinSlotSize;
    
    UCustomSimplifiedGridSlot();

};

