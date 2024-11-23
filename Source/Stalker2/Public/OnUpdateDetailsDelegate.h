#pragma once
#include "CoreMinimal.h"
#include "OnUpdateDetailsDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpdateDetails, bool, bIsEmptyDetails);

