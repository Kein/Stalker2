#include "ModioCommonTabListWidgetBase.h"

UModioCommonTabListWidgetBase::UModioCommonTabListWidgetBase() {
    this->PreviousTabAction = NULL;
    this->NextTabAction = NULL;
}

void UModioCommonTabListWidgetBase::SetPreviousTabInputActionData(FDataTableRowHandle InPreviousTabInputActionData) {
}

void UModioCommonTabListWidgetBase::SetNextTabInputActionData(FDataTableRowHandle InNextTabInputActionData) {
}

bool UModioCommonTabListWidgetBase::SelectTabByIDExtended(FName TabNameID, bool bSuppressClickFeedback, bool bSuppressOnTabSelectedIfAlreadySelected) {
    return false;
}

void UModioCommonTabListWidgetBase::RemoveAllDynamicTabs_Implementation() {
}

bool UModioCommonTabListWidgetBase::RegisterDynamicTab_Implementation(const FModioCommonTabDescriptor& TabDescriptor) {
    return false;
}

void UModioCommonTabListWidgetBase::OnTabSelectedInternal_Implementation(FName TabNameID) {
}

void UModioCommonTabListWidgetBase::HandleNavigateToPreviousTab_Implementation() {
}

void UModioCommonTabListWidgetBase::HandleNavigateToNextTab_Implementation() {
}


