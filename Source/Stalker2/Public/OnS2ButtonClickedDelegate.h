#pragma once
#include "CoreMinimal.h"
#include "OnS2ButtonClickedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnS2ButtonClicked, const FName, InButtonId);

