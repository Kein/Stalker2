#pragma once
#include "CoreMinimal.h"
#include "CommonHitArgs.h"
#include "ExplosionHitArgs.h"
#include "ExplosionHitSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FExplosionHitSignature, const FCommonHitArgs&, Common, const FExplosionHitArgs&, HitArgs);

