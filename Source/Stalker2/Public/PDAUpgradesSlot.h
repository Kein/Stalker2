#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnUpgradeSlotClickDelegate.h"
#include "PDASlotBase.h"
#include "PDAUpgradesSlot.generated.h"

class UImageWidget;
class UTextWidget;

UCLASS(EditInlineNew)
class STALKER2_API UPDAUpgradesSlot : public UPDASlotBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnUpgradeSlotClick OnUpgradeSlotClick;
    
    UPROPERTY(Instanced)
    UTextWidget* RegionText;
    
    UPROPERTY(Instanced)
    UImageWidget* ButtonIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor DefaultIconColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName StyleIdWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName StyleArmor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName StyleHelmet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName StyleDetector;
    
    UPDAUpgradesSlot();

};

