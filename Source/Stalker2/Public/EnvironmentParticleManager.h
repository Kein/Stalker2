#pragma once
#include "CoreMinimal.h"
#include "BaseTickableManager.h"
#include "EnvironmentParticleManager.generated.h"

class UNiagaraComponent;
class UStaticEnvironmentNiagaraComponent;

UCLASS()
class STALKER2_API UEnvironmentParticleManager : public UBaseTickableManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, Transient)
    TArray<UStaticEnvironmentNiagaraComponent*> StaticParticles;
    
    UPROPERTY(Instanced, Transient)
    UNiagaraComponent* EmissionCrowsFall;
    
public:
    UEnvironmentParticleManager();

};

