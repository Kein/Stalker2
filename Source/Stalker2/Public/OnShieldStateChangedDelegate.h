#pragma once
#include "CoreMinimal.h"
#include "EShieldState.h"
#include "OnShieldStateChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnShieldStateChanged, EShieldState, State);

