#pragma once
#include "CoreMinimal.h"
#include "OnUpdateSelectButtonDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpdateSelectButton, int32, OutIndexSelectButton);

