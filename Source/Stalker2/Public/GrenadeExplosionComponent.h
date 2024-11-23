#pragma once
#include "CoreMinimal.h"
#include "ExplosionComponent.h"
#include "GrenadeExplosionComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UGrenadeExplosionComponent : public UExplosionComponent {
    GENERATED_BODY()
public:
    UGrenadeExplosionComponent(const FObjectInitializer& ObjectInitializer);

};

