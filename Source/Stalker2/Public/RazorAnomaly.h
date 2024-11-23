#pragma once
#include "CoreMinimal.h"
#include "Anomaly.h"
#include "RazorAnomaly.generated.h"

class UAkRtpc;
class UFXSystemAsset;
class UNiagaraComponent;
class UStaticMeshComponent;

UCLASS()
class STALKER2_API ARazorAnomaly : public AAnomaly {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, VisibleAnywhere)
    UStaticMeshComponent* RootComponentPtr;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UAkRtpc> RazorIntensityRTPCPtr;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UStaticMeshComponent* CollisionMeshPtr;
    
    UPROPERTY(EditDefaultsOnly)
    UFXSystemAsset* DamageVFX;
    
    UPROPERTY(EditDefaultsOnly)
    UFXSystemAsset* AIDamageVFX;
    
    UPROPERTY(EditDefaultsOnly)
    UFXSystemAsset* ProjectileDestructionVFX;
    
    UPROPERTY(EditDefaultsOnly)
    UFXSystemAsset* ThrowableDestructionVFX;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UNiagaraComponent* RazorActiveVFX;
    
private:
    UPROPERTY()
    UAkRtpc* RazorIntensityRTPC;
    
public:
    ARazorAnomaly(const FObjectInitializer& ObjectInitializer);

};

