#pragma once
#include "CoreMinimal.h"
#include "RightClickMenuItemData.h"
#include "OnItemHoveredDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemHovered, const FRightClickMenuItemData&, Data, const bool, bInHovered);

