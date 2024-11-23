#include "ModioCommonErrorWithRetryWidget.h"
#include "Templates/SubclassOf.h"

UModioCommonErrorWithRetryWidget::UModioCommonErrorWithRetryWidget() {
    this->bAutoBindInputAction = false;
    this->ModioStyle = NULL;
    this->IconImage = NULL;
    this->ErrorTitleTextBlock = NULL;
    this->ErrorDescriptionTextBlock = NULL;
    this->RetryButton = NULL;
}

void UModioCommonErrorWithRetryWidget::SetStyle(TSubclassOf<UModioCommonErrorWithRetryWidgetStyle> InStyle) {
}


