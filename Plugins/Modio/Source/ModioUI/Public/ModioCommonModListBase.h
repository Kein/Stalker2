#pragma once
#include "CoreMinimal.h"
#include "ModioCommonActivatableWidget.h"
#include "ModioCommonModListBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonModListBase : public UModioCommonActivatableWidget {
    GENERATED_BODY()
public:
    UModioCommonModListBase();

};

