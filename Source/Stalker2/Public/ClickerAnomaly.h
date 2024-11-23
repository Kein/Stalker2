#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "Anomaly.h"
#include "ClickerAnomaly.generated.h"

class AActor;
class UAkAudioEvent;
class UCurveFloat;
class UNiagaraSystem;
class UPrimitiveComponent;
class UStaticMeshComponent;

UCLASS()
class STALKER2_API AClickerAnomaly : public AAnomaly {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, VisibleAnywhere)
    UStaticMeshComponent* RootComponentPtr;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UStaticMeshComponent* CollisionMeshPtr;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UNiagaraSystem* ChargeParticle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UNiagaraSystem* ExplosionParticle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* ChargeSoundEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* ExplosionSoundEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* DamageCurve;
    
public:
    AClickerAnomaly(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void OnBeginParticleOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult);
    
};

