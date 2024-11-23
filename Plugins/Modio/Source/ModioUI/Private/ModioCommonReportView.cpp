#include "ModioCommonReportView.h"

UModioCommonReportView::UModioCommonReportView() {
    this->ReportSwitcher = NULL;
    this->ReportReasonViewClass = NULL;
    this->ReportEmailViewClass = NULL;
    this->ReportMessageViewClass = NULL;
    this->ReportSummaryViewClass = NULL;
    this->ReportReasonView = NULL;
    this->ReportEmailView = NULL;
    this->ReportMessageView = NULL;
    this->ReportSummaryView = NULL;
}

void UModioCommonReportView::OnReportSummaryViewSubmitClicked_Implementation() {
}

void UModioCommonReportView::OnReportSummaryViewCancelClicked_Implementation() {
}

void UModioCommonReportView::OnReportSummaryViewBackClicked_Implementation() {
}

void UModioCommonReportView::OnReportReasonViewProceedClicked_Implementation(EModioReportType Type) {
}

void UModioCommonReportView::OnReportReasonViewCancelClicked_Implementation() {
}

void UModioCommonReportView::OnReportMessageViewSubmitClicked_Implementation(const FString& message) {
}

void UModioCommonReportView::OnReportMessageViewCancelClicked_Implementation() {
}

void UModioCommonReportView::OnReportMessageViewBackClicked_Implementation() {
}

void UModioCommonReportView::OnReportEmailViewSubmitClicked_Implementation(const FString& Email) {
}

void UModioCommonReportView::OnReportEmailViewCancelClicked_Implementation() {
}

void UModioCommonReportView::OnReportEmailViewBackClicked_Implementation() {
}

void UModioCommonReportView::HandleReportSubmit_Implementation(FModioErrorCode ErrorCode) {
}


