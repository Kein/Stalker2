#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Styling/SlateTypes.h"
#include "Layout/Margin.h"
#include "Styling/SlateColor.h"
#include "Fonts/SlateFontInfo.h"
#include "Styling/SlateTypes.h"
#include "ModioCommonComboBoxStringStyle.generated.h"

UCLASS(Abstract, BlueprintType)
class MODIOUI_API UModioCommonComboBoxStringStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FComboBoxStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTableRowStyle ItemStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin ContentPadding;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float MaxListHeight;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool HasDownArrow;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool EnableGamepadNavigationMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateFontInfo Font;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor ForegroundColor;
    
    UModioCommonComboBoxStringStyle();

};

