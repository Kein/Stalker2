#pragma once
#include "CoreMinimal.h"
#include "Anomaly.h"
#include "FlycatcherAnomaly.generated.h"

class UAkAuxBus;
class UAkLateReverbComponent;
class UAkRtpc;
class UAkStateValue;
class USphereComponent;
class UStaticMeshComponent;

UCLASS()
class STALKER2_API AFlycatcherAnomaly : public AAnomaly {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, VisibleAnywhere)
    USphereComponent* OverlapSphereComponent;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UStaticMeshComponent* VFXEffectSphere;
    
    UPROPERTY(Transient)
    UAkAuxBus* FlycatcherAuxBus;
    
    UPROPERTY(Instanced, Transient)
    UAkLateReverbComponent* FlycatcherAuxComponent;
    
    UPROPERTY(Transient)
    UAkRtpc* InfluenceLevelRTPC;
    
    UPROPERTY(Transient)
    UAkStateValue* DefaultStateValue;
    
    UPROPERTY(Transient)
    UAkStateValue* FlycatcherStateValue;
    
public:
    AFlycatcherAnomaly(const FObjectInitializer& ObjectInitializer);

};

