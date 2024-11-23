#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "SectionTitleDisplaySettings.generated.h"

USTRUCT(BlueprintType)
struct FSectionTitleDisplaySettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMargin Margin;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    STALKER2_API FSectionTitleDisplaySettings();
};

