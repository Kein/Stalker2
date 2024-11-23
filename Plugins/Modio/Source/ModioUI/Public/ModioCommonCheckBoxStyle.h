#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Styling/SlateTypes.h"
#include "Layout/Margin.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonCheckBoxStyle.generated.h"

class UModioCommonTextStyle;

UCLASS(Abstract, BlueprintType)
class MODIOUI_API UModioCommonCheckBoxStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FCheckBoxStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UModioCommonTextStyle> LabelTextStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UModioCommonTextStyle> HoveredLabelTextStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FMargin ContentPadding;
    
    UModioCommonCheckBoxStyle();

};

