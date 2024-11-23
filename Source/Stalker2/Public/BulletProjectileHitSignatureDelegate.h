#pragma once
#include "CoreMinimal.h"
#include "BulletProjectileHitArgs.h"
#include "CommonHitArgs.h"
#include "BulletProjectileHitSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBulletProjectileHitSignature, const FCommonHitArgs&, Common, const FBulletProjectileHitArgs&, HitArgs);

