#include "NotificationModel.h"

FNotificationModel::FNotificationModel() {
    this->Count = 0;
    this->HintType = EHintType::None;
    this->bItemsRemoved = false;
    this->Type = EInteractionSystemNotificationsType::None;
    this->AudiologDuration = 0.00f;
}

