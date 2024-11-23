#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Agent.h"
#include "EDamageType.h"
#include "Poltergeist.generated.h"

class UNiagaraComponent;
class USphereComponent;

UCLASS()
class STALKER2_API APoltergeist : public AAgent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Instanced)
    UNiagaraComponent* BodyParticles;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    USphereComponent* BodyCollision;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UNiagaraComponent* DeathParticles;
    
    UPROPERTY(EditDefaultsOnly)
    FVector MeshSpawnOffset;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EDamageType, float> DeathImpulseScaleMap;
    
    UPROPERTY(EditDefaultsOnly)
    float DeathBodyVisibilityDelay;
    
public:
    APoltergeist(const FObjectInitializer& ObjectInitializer);

};

