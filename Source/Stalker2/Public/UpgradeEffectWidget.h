#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WidgetBase.h"
#include "UpgradeEffectWidget.generated.h"

class UImage;
class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UUpgradeEffectWidget : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UImage* EffectIcon;
    
    UPROPERTY(Instanced)
    UTextBlock* EffectText;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor PositiveEffectValueColor;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor NegativeEffectValueColor;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor NeutralEffectValueColor;
    
public:
    UUpgradeEffectWidget();

};

