#pragma once
#include "CoreMinimal.h"
#include "UID.h"
#include "OnDamageAccumulatedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDamageAccumulated, FUID, LastDamageDealerUID, bool, bProjectileFlownThroughObject);

