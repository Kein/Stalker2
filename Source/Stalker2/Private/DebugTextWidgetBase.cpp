#include "DebugTextWidgetBase.h"

UDebugTextWidgetBase::UDebugTextWidgetBase() {
    this->TextWarningDT = NULL;
    this->IsShouldEnableInWidget = true;
    this->DebugImage = NULL;
    this->DebugText = NULL;
}

FUIWarningSettings UDebugTextWidgetBase::FindRengeSettings() {
    return FUIWarningSettings{};
}

void UDebugTextWidgetBase::CheckDebugTextBluprint(const FText& Text, UUserWidget* InOwnerWidget) {
}


