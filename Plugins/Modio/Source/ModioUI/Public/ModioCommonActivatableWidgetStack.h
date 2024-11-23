#pragma once
#include "CoreMinimal.h"
#include "Widgets/CommonActivatableWidgetContainer.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonActivatableWidgetStack.generated.h"

class UCommonActivatableWidget;

UCLASS()
class MODIOUI_API UModioCommonActivatableWidgetStack : public UCommonActivatableWidgetStack {
    GENERATED_BODY()
public:
    UModioCommonActivatableWidgetStack();

    UFUNCTION(BlueprintCallable)
    UCommonActivatableWidget* BP_AddWidgetSmart(TSubclassOf<UCommonActivatableWidget> ActivatableWidgetClass, bool bSkipIfAlreadyActive, bool bRemoveIfInStack);
    
};

