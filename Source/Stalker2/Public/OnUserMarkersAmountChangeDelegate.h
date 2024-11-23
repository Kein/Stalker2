#pragma once
#include "CoreMinimal.h"
#include "OnUserMarkersAmountChangeDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUserMarkersAmountChange, const int32, NewAmount);

