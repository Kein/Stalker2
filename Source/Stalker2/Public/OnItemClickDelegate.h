#pragma once
#include "CoreMinimal.h"
#include "RightClickMenuItemData.h"
#include "OnItemClickDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemClick, const FRightClickMenuItemData&, Data);

