#include "ModioCommonDialogMessageView.h"

UModioCommonDialogMessageView::UModioCommonDialogMessageView() {
    this->TitleTextBlock = NULL;
    this->DescriptionTextBlock = NULL;
    this->BackButton = NULL;
    this->CancelButton = NULL;
    this->ConfirmButton = NULL;
    this->OkButton = NULL;
    this->ModDetailsButton = NULL;
}

void UModioCommonDialogMessageView::SetButtonEnabledState_Implementation(UModioCommonButtonBase* Button, bool bEnabled) {
}

TMap<EModioCommonDialogButtonType, UModioCommonButtonBase*> UModioCommonDialogMessageView::GetButtons_Implementation() const {
    return TMap<EModioCommonDialogButtonType, UModioCommonButtonBase*>();
}


