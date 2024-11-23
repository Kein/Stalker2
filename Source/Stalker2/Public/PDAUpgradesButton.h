#pragma once
#include "CoreMinimal.h"
#include "PDAButtonBase.h"
#include "UpgradeFilterSettings.h"
#include "PDAUpgradesButton.generated.h"

class UImageWidget;
class UTexture2D;

UCLASS(EditInlineNew)
class STALKER2_API UPDAUpgradesButton : public UPDAButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UImageWidget* ButtonIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUpgradeFilterSettings FilterSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ShouldEnableStailManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* Icon;
    
    UPDAUpgradesButton();

};

