#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CommonHitArgs.h"
#include "HitReceiver.h"
#include "TelekineticShield.generated.h"

class AObj;
class UAkAudioEvent;
class UAkComponent;
class UNiagaraComponent;
class UNiagaraSystem;
class UStaticMeshComponent;

UCLASS()
class STALKER2_API ATelekineticShield : public AActor, public IHitReceiver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UStaticMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UNiagaraComponent* Particle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UNiagaraSystem* ShieldDestroyedParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UNiagaraSystem* HitImpactParticle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UAkComponent* AkAudioComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* ShieldDestroyedSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* ShieldSpawnedSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* ShieldImpactSound;
    
private:
    UPROPERTY(EditAnywhere)
    float Health;
    
    UPROPERTY(EditAnywhere)
    float MovementSpeed;
    
    UPROPERTY(EditAnywhere)
    float DistanceFromOwner;
    
    UPROPERTY(EditAnywhere)
    float OwnerHeightOffset;
    
    UPROPERTY(EditAnywhere)
    float ParticleIntensityChangeSpeed;
    
    UPROPERTY(EditAnywhere)
    float MaxLifetime;
    
    UPROPERTY(EditAnywhere)
    float SpawnShiftFraction;
    
public:
    ATelekineticShield(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnShieldDestroyedBP();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHitReceivedBP(FCommonHitArgs HitArgs);
    
private:
    UFUNCTION()
    void OnDeathParticleFinished(UNiagaraComponent* DeathVFXComponent);
    
protected:
    UFUNCTION(BlueprintPure)
    AObj* GetOwnerActor() const;
    

    // Fix for true pure virtual functions not being implemented
};

