#pragma once
#include "CoreMinimal.h"
#include "OnNoteSlotClickDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNoteSlotClick, int32, OutSlotIndex);

