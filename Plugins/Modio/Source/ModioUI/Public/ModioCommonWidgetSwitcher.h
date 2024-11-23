#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidgetSwitcher.h"
#include "ModioCommonWidgetSwitcher.generated.h"

UCLASS()
class MODIOUI_API UModioCommonWidgetSwitcher : public UCommonActivatableWidgetSwitcher {
    GENERATED_BODY()
public:
	// FIXME
    //UPROPERTY(BlueprintAssignable)
    //FOnActiveIndexChanged_BP OnActiveWidgetIndexChanged_BP;
    
    UModioCommonWidgetSwitcher();

};

