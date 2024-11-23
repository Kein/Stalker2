#pragma once
#include "CoreMinimal.h"
#include "ModioCommonActivatableWidget.h"
#include "ModioCommonReportReasonViewBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonReportReasonViewBase : public UModioCommonActivatableWidget {
    GENERATED_BODY()
public:
    // FIXME
    /*
    UPROPERTY(BlueprintAssignable)
    FOnModioCommonReportReasonViewProceedClicked OnProceedClicked;
    
    UPROPERTY(BlueprintAssignable)
    FOnModioCommonReportReasonViewCancelClicked OnCancelClicked;
    */

    UModioCommonReportReasonViewBase();

};

