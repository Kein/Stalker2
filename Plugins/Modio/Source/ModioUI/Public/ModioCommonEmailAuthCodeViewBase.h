#pragma once
#include "CoreMinimal.h"
#include "ModioCommonActivatableWidget.h"
#include "ModioCommonEmailAuthCodeViewBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonEmailAuthCodeViewBase : public UModioCommonActivatableWidget {
    GENERATED_BODY()
public:
	// FIXME
	/*
    UPROPERTY(BlueprintAssignable)
    FOnModioCommonEmailAuthCodeViewBackClicked OnBackClicked;
    
    UPROPERTY(BlueprintAssignable)
    FOnModioCommonEmailAuthCodeViewSubmitClicked OnSubmitClicked;
    
    UPROPERTY(BlueprintAssignable)
    FOnModioCommonEmailAuthCodeViewCancelClicked OnCancelClicked;
    */
    UModioCommonEmailAuthCodeViewBase();

};

