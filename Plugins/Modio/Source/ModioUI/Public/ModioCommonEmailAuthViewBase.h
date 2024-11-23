#pragma once
#include "CoreMinimal.h"
#include "ModioCommonActivatableWidget.h"
#include "ModioCommonEmailAuthViewBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonEmailAuthViewBase : public UModioCommonActivatableWidget {
    GENERATED_BODY()
public:
	// FIXME
	/*
    UPROPERTY(BlueprintAssignable)
    FOnModioCommonEmailAuthViewBackClicked OnBackClicked;
    
    UPROPERTY(BlueprintAssignable)
    FOnModioCommonEmailAuthViewCancelClicked OnCancelClicked;
    
    UPROPERTY(BlueprintAssignable)
    FOnModioCommonEmailAuthViewSubmitClicked OnSubmitClicked;
    */
    UModioCommonEmailAuthViewBase();

};

