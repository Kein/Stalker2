#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "SlotScaleSettings.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FSlotScaleSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMargin Padding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    
    FSlotScaleSettings();
};

