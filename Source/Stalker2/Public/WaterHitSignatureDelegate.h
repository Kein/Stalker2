#pragma once
#include "CoreMinimal.h"
#include "CommonHitArgs.h"
#include "WaterHitArgs.h"
#include "WaterHitSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWaterHitSignature, const FCommonHitArgs&, Common, const FWaterHitArgs&, HitArgs);

