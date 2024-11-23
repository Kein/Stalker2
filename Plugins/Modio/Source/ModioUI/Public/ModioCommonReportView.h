#pragma once
#include "CoreMinimal.h"
#include "EModioReportType.h"
#include "ModioErrorCode.h"
#include "ModioReportParams.h"
#include "ModioCommonReportViewBase.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonReportView.generated.h"

class UModioCommonReportEmailViewBase;
class UModioCommonReportMessageViewBase;
class UModioCommonReportReasonViewBase;
class UModioCommonReportSummaryViewBase;
class UModioCommonWidgetSwitcher;

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonReportView : public UModioCommonReportViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonWidgetSwitcher* ReportSwitcher;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonReportReasonViewBase> ReportReasonViewClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonReportEmailViewBase> ReportEmailViewClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonReportMessageViewBase> ReportMessageViewClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonReportSummaryViewBase> ReportSummaryViewClass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FModioReportParams ReportParams;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    UModioCommonReportReasonViewBase* ReportReasonView;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    UModioCommonReportEmailViewBase* ReportEmailView;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    UModioCommonReportMessageViewBase* ReportMessageView;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    UModioCommonReportSummaryViewBase* ReportSummaryView;
    
public:
    UModioCommonReportView();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReportSummaryViewSubmitClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReportSummaryViewCancelClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReportSummaryViewBackClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReportReasonViewProceedClicked(EModioReportType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReportReasonViewCancelClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReportMessageViewSubmitClicked(const FString& message);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReportMessageViewCancelClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReportMessageViewBackClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReportEmailViewSubmitClicked(const FString& Email);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReportEmailViewCancelClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReportEmailViewBackClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleReportSubmit(FModioErrorCode ErrorCode);
    
};

