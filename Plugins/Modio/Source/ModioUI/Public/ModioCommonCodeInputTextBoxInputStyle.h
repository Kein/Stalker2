#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateTypes.h"
#include "ModioCommonCodeInputTextBoxInputStyle.generated.h"

USTRUCT(BlueprintType)
struct MODIOUI_API FModioCommonCodeInputTextBoxInputStyle : public FTextBlockStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush CharacterBorderBrushBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush CharacterBorderBrushFocused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMargin CharacterBorderPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush FakeCaretBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> FakeCaretHorizontalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EVerticalAlignment> FakeCaretVerticalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMargin CharacterPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMargin CharacterSpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinimumCharacterWidth;
    
    FModioCommonCodeInputTextBoxInputStyle();
};

