#pragma once
#include "CoreMinimal.h"
#include "CommonHitArgs.h"
#include "PhysicsHitArgs.h"
#include "PhysicsHitSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPhysicsHitSignature, const FCommonHitArgs&, Common, const FPhysicsHitArgs&, HitArgs);

