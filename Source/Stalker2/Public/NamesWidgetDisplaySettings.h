#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "Components/SlateWrapperTypes.h"
#include "NamesWidgetDisplaySettings.generated.h"

USTRUCT(BlueprintType)
struct FNamesWidgetDisplaySettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMargin Margin;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    
    UPROPERTY(EditAnywhere)
    FSlateChildSize SlateChildSize;
    
    STALKER2_API FNamesWidgetDisplaySettings();
};

