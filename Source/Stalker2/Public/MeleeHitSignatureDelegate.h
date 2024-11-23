#pragma once
#include "CoreMinimal.h"
#include "CommonHitArgs.h"
#include "MeleeHitArgs.h"
#include "MeleeHitSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMeleeHitSignature, const FCommonHitArgs&, Common, const FMeleeHitArgs&, HitArgs);

