#include "ModioCommonNotificationWidgetBase.h"
#include "Templates/SubclassOf.h"

UModioCommonNotificationWidgetBase::UModioCommonNotificationWidgetBase() {
    this->ExpiryDuration = 0.00f;
}

UWidget* UModioCommonNotificationWidgetBase::CreateFromParams(TSubclassOf<UWidget> NotificationClass, const FModioNotificationParams& Params, UWidget* Outer) {
    return NULL;
}


