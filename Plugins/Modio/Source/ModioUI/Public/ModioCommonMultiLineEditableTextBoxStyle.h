#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Layout/Margin.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateColor.h"
#include "Styling/SlateTypes.h"
#include "ModioCommonMultiLineEditableTextBoxStyle.generated.h"

UCLASS(Abstract, BlueprintType)
class MODIOUI_API UModioCommonMultiLineEditableTextBoxStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxTextLength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText HintText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateBrush NormalBackgroundBrush;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateBrush HoveredBackgroundBrush;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateBrush FocusedBackgroundBrush;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateBrush ReadOnlyBackgroundBrush;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin Padding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTextBlockStyle TextStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor ForegroundColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor BackgroundColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor ReadOnlyForegroundColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor FocusedForegroundColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateBrush NormalBorderBrush;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateBrush HoveredBorderBrush;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateBrush ErrorBorderBrush;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bShowHintIcon;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSlateBrush HintIcon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin HintIconPadding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bApplyFocusedStyleInReadOnlyMode;
    
    UModioCommonMultiLineEditableTextBoxStyle();

};

