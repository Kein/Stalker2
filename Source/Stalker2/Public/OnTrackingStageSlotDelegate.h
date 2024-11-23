#pragma once
#include "CoreMinimal.h"
#include "OnTrackingStageSlotDelegate.generated.h"

class UPDAQuestTaskSlot;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTrackingStageSlot, UPDAQuestTaskSlot*, StageSlotWidget);

