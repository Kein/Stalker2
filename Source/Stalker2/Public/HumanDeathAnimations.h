#pragma once
#include "CoreMinimal.h"
#include "EAnimDirections.h"
#include "EAnimHitBodyPart.h"
#include "EHumanAnimDamageSource.h"
#include "HumanDeathAnimArray.h"
#include "HumanDeathDirectionalAnimMap.h"
#include "HumanDeathAnimations.generated.h"

USTRUCT(BlueprintType)
struct FHumanDeathAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EAnimHitBodyPart, FHumanDeathDirectionalAnimMap> BulletDeathAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EAnimDirections, FHumanDeathAnimArray> ExplosionDeathAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EHumanAnimDamageSource, FHumanDeathAnimArray> DeathAnimations;
    
    STALKER2_API FHumanDeathAnimations();
};

