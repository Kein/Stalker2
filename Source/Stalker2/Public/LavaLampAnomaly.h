#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NiagaraDataInterfaceExport.h"
#include "Anomaly.h"
#include "LavaLampAnomaly.generated.h"

class UAkAudioEvent;
class UMaterialInterface;
class UNiagaraComponent;
class USphereComponent;

UCLASS()
class STALKER2_API ALavaLampAnomaly : public AAnomaly {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* CollisionPlayEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* CollisionStopEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* ClotEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ParticleLifetimeAfterCollision;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ClotEventDelay;
    
    UPROPERTY(Instanced, VisibleDefaultsOnly)
    USphereComponent* OverlapSphereComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UNiagaraComponent* ActivationParticle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* ClotDecalMaterial;
    
public:
    ALavaLampAnomaly(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnLavaStaticObjectCollision(FVector Location, FVector NormalDirection, float Radius);
    
    UFUNCTION(BlueprintCallable)
    void OnLavaCollision(const FBasicParticleData& BasicParticleData);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnFollowPositionChanged(FVector FollowPosition);
    
};

