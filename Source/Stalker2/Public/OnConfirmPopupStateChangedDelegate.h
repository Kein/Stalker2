#pragma once
#include "CoreMinimal.h"
#include "OnConfirmPopupStateChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnConfirmPopupStateChanged, bool, InVisible);

