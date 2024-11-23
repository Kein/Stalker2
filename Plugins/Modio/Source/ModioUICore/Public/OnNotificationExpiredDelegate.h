#pragma once
#include "CoreMinimal.h"
#include "OnNotificationExpiredDelegate.generated.h"

class UWidget;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FOnNotificationExpired, UWidget*, NotificationWidget);

