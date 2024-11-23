#pragma once
#include "CoreMinimal.h"
#include "OnStageChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStageChanged, int32, NewTargetStageIndex);

