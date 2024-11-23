#pragma once
#include "CoreMinimal.h"
#include "MenuLegendSubView.h"
#include "ModioLegendData.h"
#include "ModioLegendSubView.generated.h"

class UModioSearchField;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UModioLegendSubView : public UMenuLegendSubView {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioSearchField* SearchField;
    
    UPROPERTY(EditDefaultsOnly)
    FModioLegendData LegendData;
    
public:
    UModioLegendSubView();

};

