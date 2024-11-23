#pragma once
#include "CoreMinimal.h"
#include "ModioCommonActivatableWidget.h"
#include "ModioCommonReportMessageViewBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonReportMessageViewBase : public UModioCommonActivatableWidget {
    GENERATED_BODY()
public:
	// FIXME
	/*
    UPROPERTY(BlueprintAssignable)
    FOnModioCommonReportMessageViewBackClicked OnBackClicked;
    
    UPROPERTY(BlueprintAssignable)
    FOnModioCommonReportMessageViewCancelClicked OnCancelClicked;
    
    UPROPERTY(BlueprintAssignable)
    FOnModioCommonReportMessageViewSubmitClicked OnSubmitClicked;
    */
    UModioCommonReportMessageViewBase();

};

