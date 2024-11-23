#pragma once
#include "CoreMinimal.h"
#include "Anomaly.h"
#include "ClassicFireAnomaly.generated.h"

class UCapsuleComponent;
class UDecalComponent;
class UNiagaraComponent;
class UStaticMeshComponent;

UCLASS()
class STALKER2_API AClassicFireAnomaly : public AAnomaly {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* CollisionMeshPtr;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UCapsuleComponent* FlamePillarCapsule;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* IdleVFX;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UDecalComponent* DecalComponent;
    
public:
    AClassicFireAnomaly(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnStateChanged();
    
};

