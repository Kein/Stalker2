#pragma once
#include "CoreMinimal.h"
#include "OnHoverDescriptionDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHoverDescription, bool, bIsHovered);

