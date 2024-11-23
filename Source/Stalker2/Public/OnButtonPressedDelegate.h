#pragma once
#include "CoreMinimal.h"
#include "OnButtonPressedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnButtonPressed, const FName, InButtonId);

