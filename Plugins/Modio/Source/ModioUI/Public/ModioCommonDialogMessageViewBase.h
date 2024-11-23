#pragma once
#include "CoreMinimal.h"
#include "ModioCommonActivatableWidget.h"
#include "ModioCommonDialogMessageViewBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonDialogMessageViewBase : public UModioCommonActivatableWidget {
    GENERATED_BODY()
public:
    UModioCommonDialogMessageViewBase();

};

