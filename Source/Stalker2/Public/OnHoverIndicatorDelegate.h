#pragma once
#include "CoreMinimal.h"
#include "OnHoverIndicatorDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHoverIndicator, bool, bIsHovered);

