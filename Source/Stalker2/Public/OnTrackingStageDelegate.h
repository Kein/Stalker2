#pragma once
#include "CoreMinimal.h"
#include "OnTrackingStageDelegate.generated.h"

class UPDAQuestTaskSlot;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTrackingStage, UPDAQuestTaskSlot*, StageSlotWidget);

