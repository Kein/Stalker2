#pragma once
#include "CoreMinimal.h"
#include "ModioModManagementEvent.h"
#include "OnModManagementDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FOnModManagementDelegate, FModioModManagementEvent, Event);

