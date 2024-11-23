#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "ESlotDirection.h"
#include "TipPositionArgs.generated.h"

USTRUCT()
struct FTipPositionArgs {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 Row;
    
    UPROPERTY()
    int32 Column;
    
    UPROPERTY()
    double size;
    
    UPROPERTY()
    ESlotDirection Direction;
    
    UPROPERTY()
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY()
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    
    UPROPERTY()
    FVector2D Translation;
    
    STALKER2_API FTipPositionArgs();
};

