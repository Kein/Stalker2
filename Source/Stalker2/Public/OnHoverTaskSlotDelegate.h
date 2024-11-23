#pragma once
#include "CoreMinimal.h"
#include "OnHoverTaskSlotDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHoverTaskSlot, bool, bIsHovered, int32, InIndexOnParent);

