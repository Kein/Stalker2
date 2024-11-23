#include "SystemNotificationWidget.h"

USystemNotificationWidget::USystemNotificationWidget() {
    this->VerticalBox = NULL;
    this->SystemNotificationItemClass = NULL;
    this->SystemNotificationsMax = 3;
    this->QueueDelay = 0.80f;
    this->TimerRate = 0.10f;
    this->MoveUpAnimMultiplier = 1.00f;
    this->AppearAnimMultiplier = 1.00f;
    this->HideAnimMultiplier = 1.00f;
    this->WorldMapStashZoom = 0;
    this->MaxTitleLen = 25;
    this->EndText = TEXT("...");
}

void USystemNotificationWidget::ProceedInput() {
}

void USystemNotificationWidget::OnSystemNotificationActionCompleted(const FNotificationModel& Model) {
}

void USystemNotificationWidget::NotificationClickHandler() {
}

void USystemNotificationWidget::InputCancel() {
}

void USystemNotificationWidget::CenterMapOnLocation() {
}


