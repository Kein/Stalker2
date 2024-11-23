#pragma once
#include "CoreMinimal.h"
#include "Anomaly.h"
#include "HitReceiver.h"
#include "ToxicCloudAnomaly.generated.h"

class UAkAudioEvent;
class UHittableComponent;
class UNiagaraComponent;
class UNiagaraSystem;
class UStaticMeshComponent;

UCLASS()
class STALKER2_API AToxicCloudAnomaly : public AAnomaly, public IHitReceiver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UStaticMeshComponent* CollisionMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UNiagaraComponent* CloudParticle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UNiagaraSystem* ImpactParticle;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UHittableComponent* HittableComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* ToxicCloudSoundEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* AppearSoundEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* DisappearSoundEvent;
    
public:
    AToxicCloudAnomaly(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

