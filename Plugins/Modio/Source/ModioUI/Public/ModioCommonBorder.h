#pragma once
#include "CoreMinimal.h"
#include "CommonBorder.h"
#include "Layout/Geometry.h"
#include "Input/Events.h"
#include "Components/SlateWrapperTypes.h"
#include "ModioCommonBorder.generated.h"

UCLASS()
class MODIOUI_API UModioCommonBorder : public UCommonBorder {
    GENERATED_BODY()
public:
    UModioCommonBorder();

protected:
    UFUNCTION()
    FEventReply HandleOnMouseButtonDownEvent(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    
};

