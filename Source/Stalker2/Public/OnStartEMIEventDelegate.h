#pragma once
#include "CoreMinimal.h"
#include "OnStartEMIEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStartEMIEvent, float, EMIDuration);

