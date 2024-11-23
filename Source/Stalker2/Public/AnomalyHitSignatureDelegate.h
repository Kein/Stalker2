#pragma once
#include "CoreMinimal.h"
#include "AnomalyHitArgs.h"
#include "CommonHitArgs.h"
#include "AnomalyHitSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAnomalyHitSignature, const FCommonHitArgs&, Common, const FAnomalyHitArgs&, HitArgs);

