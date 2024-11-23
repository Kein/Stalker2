#include "ModioCommonNotificationWidget.h"
#include "Templates/SubclassOf.h"

UModioCommonNotificationWidget::UModioCommonNotificationWidget() {
    this->ModioStyle = NULL;
    this->BackgroundBorder = NULL;
    this->StatusBackgroundBorder = NULL;
    this->StatusIndicatorImage = NULL;
    this->NotificationTitleTextBlock = NULL;
    this->NotificationMessageTextBlock = NULL;
    this->bDisplayStarted = false;
}

void UModioCommonNotificationWidget::SetStyle(TSubclassOf<UModioCommonNotificationWidgetStyle> InStyle) {
}


