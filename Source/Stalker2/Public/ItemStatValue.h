#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WidgetBase.h"
#include "ItemStatValue.generated.h"

class UImageWidget;
class UTextWidget;

UCLASS(EditInlineNew)
class STALKER2_API UItemStatValue : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UTextWidget* Name;
    
    UPROPERTY(Instanced)
    UTextWidget* Value;
    
    UPROPERTY(Instanced)
    UTextWidget* ValuePostFix;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor PositiveEffectValueColor;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor NegativeEffectValueColor;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor NeutralEffectValueColor;
    
public:
    UPROPERTY(Instanced)
    UImageWidget* IconImage;
    
    UItemStatValue();

};

