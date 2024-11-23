#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "Styling/SlateTypes.h"
#include "ModioCommonScrollBarStyle.generated.h"

UCLASS(Abstract, BlueprintType)
class MODIOUI_API UModioCommonScrollBarStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FScrollBarStyle Style;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bAlwaysShowScrollbar;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bAlwaysShowScrollbarTrack;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TEnumAsByte<EOrientation> Orientation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector2D Thickness;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FMargin Padding;
    
    UModioCommonScrollBarStyle();

};

