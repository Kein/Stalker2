#pragma once
#include "CoreMinimal.h"
#include "OnGammaSelectedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGammaSelected, const bool, InSelected);

