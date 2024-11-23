#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ProjectileImpactFXData.h"
#include "ProjectileImpactEffectSubsystem.generated.h"

class APC;

UCLASS()
class UProjectileImpactEffectSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TMap<uint32, FProjectileImpactFXData> ImpactRequests;
    
    UPROPERTY(Transient)
    APC* CachedPlayerView;
    
public:
    UProjectileImpactEffectSubsystem();

};

