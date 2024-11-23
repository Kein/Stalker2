#pragma once
#include "CoreMinimal.h"
#include "CommonTextBlock.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "Styling/SlateBrush.h"
#include "Components/SlateWrapperTypes.h"
#include "EModioCommonRichTextStyleTextImageOrder.h"
#include "ModioCommonRichTextStyle.generated.h"

UCLASS(Abstract)
class MODIOUI_API UModioCommonRichTextStyle : public UCommonTextStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush ImageBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EModioCommonRichTextStyleTextImageOrder TextImageOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMargin ImagePadding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin TextPadding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateChildSize ImageSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateChildSize TextSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> ImageHorizontalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EVerticalAlignment> ImageVerticalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> TextHorizontalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EVerticalAlignment> TextVerticalAlignment;
    
    UModioCommonRichTextStyle();

};

