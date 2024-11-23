#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AnomalyHitSignatureDelegate.h"
#include "BulletProjectileHitSignatureDelegate.h"
#include "ExplosionHitSignatureDelegate.h"
#include "HitReceiver.h"
#include "MeleeHitSignatureDelegate.h"
#include "PhysicsHitSignatureDelegate.h"
#include "ProjectileHitSignatureDelegate.h"
#include "WaterHitSignatureDelegate.h"
#include "HitReceiverComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UHitReceiverComponent : public UActorComponent, public IHitReceiver {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FExplosionHitSignature ExplosionHit;
    
    UPROPERTY(BlueprintAssignable)
    FBulletProjectileHitSignature BulletProjectileHit;
    
    UPROPERTY(BlueprintAssignable)
    FMeleeHitSignature MeleeHit;
    
    UPROPERTY(BlueprintAssignable)
    FAnomalyHitSignature AnomalyHit;
    
    UPROPERTY(BlueprintAssignable)
    FProjectileHitSignature ProjectileHit;
    
    UPROPERTY(BlueprintAssignable)
    FPhysicsHitSignature PhysicsHit;
    
    UPROPERTY(BlueprintAssignable)
    FWaterHitSignature WaterHit;
    
    UHitReceiverComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

