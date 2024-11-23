#pragma once
#include "CoreMinimal.h"
#include "Anomaly.h"
#include "LightningBallAnomaly.generated.h"

class UAkAudioEvent;
class UAkSwitchValue;
class UFXSystemAsset;
class ULightningBallNavigationComponent;
class UNiagaraComponent;
class UNiagaraSystem;
class USphereComponent;

UCLASS()
class STALKER2_API ALightningBallAnomaly : public AAnomaly {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, VisibleDefaultsOnly)
    USphereComponent* OverlapDamageComponent;
    
    UPROPERTY(Instanced, VisibleDefaultsOnly)
    UNiagaraComponent* IdleParticle;
    
    UPROPERTY(EditDefaultsOnly)
    UFXSystemAsset* ExplosionParticle;
    
    UPROPERTY(EditDefaultsOnly)
    UNiagaraSystem* AnomalyEatingParticle;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* FeastAudioEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UAkSwitchValue* FeastIdleSwitch;
    
    UPROPERTY(EditDefaultsOnly)
    UAkSwitchValue* FeastEndSwitch;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* AnomalyExplosionAudioEvent;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    ULightningBallNavigationComponent* AnomalyNavigationComponent;
    
public:
    ALightningBallAnomaly(const FObjectInitializer& ObjectInitializer);

};

