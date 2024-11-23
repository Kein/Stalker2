#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "HitReceiver.h"
#include "UIDActor_Grenade.h"
#include "Grenade.generated.h"

class AActor;
class UAkComponent;
class UGrenadeExplosionComponent;
class UHittableComponent;
class UMaterialInterface;
class UPhysicsInteractionComponent;
class UPhysicsSoundsComponent;
class UStaticMeshComponent;
class UWaterContactController;

UCLASS()
class STALKER2_API AGrenade : public AUIDActor_Grenade, public IHitReceiver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UGrenadeExplosionComponent* ExplosionComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UAkComponent* ExplosionAudioComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UHittableComponent* HittableComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPhysicsInteractionComponent* PhysicsInteractionComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPhysicsSoundsComponent* PhysicsSoundsComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UWaterContactController* WaterContactController;
    
private:
    UPROPERTY(SaveGame, VisibleAnywhere)
    FString SID;
    
    UPROPERTY(SaveGame)
    float TimeToExplosion;
    
    UPROPERTY()
    UMaterialInterface* ExplosionDecalMaterial;
    
public:
    AGrenade(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION()
    void Explode() const;
    

    // Fix for true pure virtual functions not being implemented
};

