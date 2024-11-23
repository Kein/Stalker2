#pragma once
#include "CoreMinimal.h"
#include "Anomaly.h"
#include "EPillowAnomalyBiomeType.h"
#include "PillowAnomaly.generated.h"

class UNiagaraComponent;
class UNiagaraSystem;
class UStaticMeshComponent;

UCLASS()
class STALKER2_API APillowAnomaly : public AAnomaly {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, VisibleAnywhere)
    UStaticMeshComponent* CollisionMesh;
    
private:
    UPROPERTY(EditDefaultsOnly, Instanced)
    UNiagaraComponent* IdleParticle;
    
    UPROPERTY(EditDefaultsOnly)
    UNiagaraSystem* InteractParticle;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EPillowAnomalyBiomeType, TSoftObjectPtr<UNiagaraSystem>> BiomeParticles;
    
public:
    APillowAnomaly(const FObjectInitializer& ObjectInitializer);

};

