#pragma once
#include "CoreMinimal.h"
#include "ProjectileImpactFXData.generated.h"

class AAgent;

USTRUCT(BlueprintType)
struct FProjectileImpactFXData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    AAgent* HitAgent;
    
    STALKER2_API FProjectileImpactFXData();
};

