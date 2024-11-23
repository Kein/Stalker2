#pragma once
#include "CoreMinimal.h"
#include "ModioReportParams.h"
#include "ModioCommonActivatableWidget.h"
#include "ModioCommonReportSummaryViewBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonReportSummaryViewBase : public UModioCommonActivatableWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnModioCommonReportSummaryViewSubmitClicked);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnModioCommonReportSummaryViewCancelClicked);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnModioCommonReportSummaryViewBackClicked);
    
    UPROPERTY(BlueprintAssignable)
    FOnModioCommonReportSummaryViewBackClicked OnBackClicked;
    
    UPROPERTY(BlueprintAssignable)
    FOnModioCommonReportSummaryViewCancelClicked OnCancelClicked;
    
    UPROPERTY(BlueprintAssignable)
    FOnModioCommonReportSummaryViewSubmitClicked OnSubmitClicked;
    
    UModioCommonReportSummaryViewBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetReportParams(const FModioReportParams& ReportParams);
    
};

