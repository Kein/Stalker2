#pragma once
#include "CoreMinimal.h"
#include "CommonHitArgs.h"
#include "ProjectileHitArgs.h"
#include "ProjectileHitSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FProjectileHitSignature, const FCommonHitArgs&, Common, const FProjectileHitArgs&, HitArgs);

