#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "NameDisplaySettings.generated.h"

USTRUCT(BlueprintType)
struct FNameDisplaySettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMargin Margin;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    
    STALKER2_API FNameDisplaySettings();
};

