#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "TextProperties.generated.h"

USTRUCT(BlueprintType)
struct FTextProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EHorizontalAlignment> TextAlignment;
    
    UPROPERTY(EditDefaultsOnly)
    FMargin TextMargin;
    
    STALKER2_API FTextProperties();
};

