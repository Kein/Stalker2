#pragma once
#include "CoreMinimal.h"
#include "EAmmoCaliber.h"
#include "EAmmoType.h"
#include "BulletProjectileHitArgs.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FBulletProjectileHitArgs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EAmmoType Type;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EAmmoCaliber Caliber;
    
    FBulletProjectileHitArgs();
};

