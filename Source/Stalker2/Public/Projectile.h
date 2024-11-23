#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/HitResult.h"
#include "BusVolumeDataReceiver.h"
#include "Projectile.generated.h"

class UAkAudioEvent;
class USphereComponent;

UCLASS()
class STALKER2_API AProjectile : public AActor, public IBusVolumeDataReceiver {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, VisibleDefaultsOnly)
    USphereComponent* CollisionComp;
    
    UPROPERTY(VisibleAnywhere)
    UAkAudioEvent* FlybySound;
    
public:
    AProjectile(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void OnOverlap(const FHitResult& Hit);
    

    // Fix for true pure virtual functions not being implemented
};

