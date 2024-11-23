#pragma once
#include "CoreMinimal.h"
#include "EMainHandEquipmentType.h"
#include "WidgetBase.h"
#include "ItemSelectorSlotBase.generated.h"

class UImageWidget;
class UTexture2D;

UCLASS(EditInlineNew)
class STALKER2_API UItemSelectorSlotBase : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UImageWidget* WeaponIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* AlternativeIconTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMainHandEquipmentType DisplaySlotType;
    
    UItemSelectorSlotBase();

};

