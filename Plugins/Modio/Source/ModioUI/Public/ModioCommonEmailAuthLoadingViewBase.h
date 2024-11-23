#pragma once
#include "CoreMinimal.h"
#include "ModioCommonActivatableWidget.h"
#include "ModioCommonEmailAuthLoadingViewBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonEmailAuthLoadingViewBase : public UModioCommonActivatableWidget {
    GENERATED_BODY()
public:
	// FIXME
    //UPROPERTY(BlueprintAssignable)
    //FOnModioCommonEmailAuthLoadingViewCancelClicked OnCancelClicked;
    
    UModioCommonEmailAuthLoadingViewBase();

};

