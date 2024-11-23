#include "ModioCommonNotificationController.h"

UModioCommonNotificationController::UModioCommonNotificationController() {
    this->MaxNotificationsOnScreen = 5;
    this->ErrorNotificationClass = NULL;
    this->SuccessNotificationClass = NULL;
    this->NotificationList = NULL;
}

void UModioCommonNotificationController::OnNotificationExpired_Implementation(UWidget* Notification) {
}


