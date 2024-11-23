#pragma once
#include "CoreMinimal.h"
#include "ModioCommonActivatableWidget.h"
#include "ModioCommonSearchViewBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonSearchViewBase : public UModioCommonActivatableWidget {
    GENERATED_BODY()
public:
    UModioCommonSearchViewBase();

};

