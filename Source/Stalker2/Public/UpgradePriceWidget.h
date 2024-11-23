#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "UpgradePriceWidget.generated.h"

class UTextBlock;

UCLASS(EditInlineNew)
class STALKER2_API UUpgradePriceWidget : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UTextBlock* Price;
    
    UPROPERTY(Instanced)
    UTextBlock* Weight;
    
    UPROPERTY(Instanced)
    UTextBlock* Description;
    
    UPROPERTY(EditDefaultsOnly)
    FString KgL10nSID;
    
    UPROPERTY(EditDefaultsOnly)
    FString DescriptionL10nSID;
    
public:
    UUpgradePriceWidget();

};

