#pragma once
#include "CoreMinimal.h"
#include "ETopazScannerState.h"
#include "OnTopazStateChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTopazStateChanged, const ETopazScannerState, NewState);

