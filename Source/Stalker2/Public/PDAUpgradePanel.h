#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PDASlotPanelBase.h"
#include "PDAUpgradePanel.generated.h"

class UPDATextBorder;
class UUpgradeMenuWidget;

UCLASS(EditInlineNew)
class STALKER2_API UPDAUpgradePanel : public UPDASlotPanelBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, Transient)
    UUpgradeMenuWidget* UpgradeMenu;
    
    UPROPERTY(Instanced)
    UPDATextBorder* EquipedBorder;
    
    UPROPERTY(Instanced)
    UPDATextBorder* UnEquipedBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString EquipedBorderLocalizationSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString UnEquipedBorderLocalizationSID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor UpgradeColor;
    
    UPDAUpgradePanel();

};

