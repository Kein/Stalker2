#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "Anomaly.h"
#include "SoapBubbleAnomaly.generated.h"

class AActor;
class UAkAudioEvent;
class UCurveFloat;
class UFXSystemAsset;
class UMaterialInterface;
class UNiagaraComponent;
class UPrimitiveComponent;
class USphereComponent;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS()
class STALKER2_API ASoapBubbleAnomaly : public AAnomaly {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* SoapBubbleDamage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* SoapBubbleDestroy;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* SoapBubbleParticleDestroy;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFXSystemAsset* SoapBubbleParticleExplosion;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* SoapBubbleParticleMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* SoapBubbleParticleMesh;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UStaticMeshComponent* SoapBubble;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    USphereComponent* SoapBubbleBoundSphere;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UNiagaraComponent* SoapBubbleExplosionParticle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* InterpolationCurve;
    
public:
    ASoapBubbleAnomaly(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void OnActorCollided(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult);
    
};

