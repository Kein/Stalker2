#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Styling/SlateTypes.h"
#include "Layout/Margin.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateColor.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonExpandableAreaStyle.generated.h"

class UModioCommonTextStyle;

UCLASS(Abstract, BlueprintType)
class MODIOUI_API UModioCommonExpandableAreaStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UModioCommonTextStyle> NormalLabelTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UModioCommonTextStyle> SelectedLabelTextStyle;
    
    UPROPERTY(EditAnywhere)
    FExpandableAreaStyle Style;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateBrush BorderBrush;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor BorderColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsExpandedByDefault;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin HeaderPadding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin AreaPadding;
    
    UModioCommonExpandableAreaStyle();

};

