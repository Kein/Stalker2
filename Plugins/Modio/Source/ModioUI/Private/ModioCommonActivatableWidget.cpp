#include "ModioCommonActivatableWidget.h"

UModioCommonActivatableWidget::UModioCommonActivatableWidget() {
    this->bRoutedSetDataSource = false;
    this->bAutoBindInputAction = true;
    this->bAutoFocusOnActivation = true;
    this->DataSource = NULL;
}

void UModioCommonActivatableWidget::SetDataSource(UObject* NewDataSource) {
}



FString UModioCommonActivatableWidget::GetRequestIdentifier_Implementation() {
    return TEXT("");
}

bool UModioCommonActivatableWidget::GetAutoFocusOnActivation() const {
    return false;
}

bool UModioCommonActivatableWidget::GetAutoBindInputAction() const {
    return false;
}

void UModioCommonActivatableWidget::FocusOnDesiredWidget() {
}

void UModioCommonActivatableWidget::ClearListeningInputActions() {
}

void UModioCommonActivatableWidget::ClearListeningInputAction(UModioCommonButtonBase* Button) {
}

void UModioCommonActivatableWidget::BP_UnbindInputActions_Implementation() {
}


void UModioCommonActivatableWidget::BP_ListenForInputAction(UModioCommonButtonBase* Button, FDataTableRowHandle InputAction, const FText& DisplayName, const UModioCommonActivatableWidget::FOnModioCommonActivatableWidgetActionFired& OnActionFired) {
}

void UModioCommonActivatableWidget::BP_BindInputActions_Implementation() {
}


