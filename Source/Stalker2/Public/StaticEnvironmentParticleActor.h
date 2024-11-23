#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StaticEnvironmentParticleActor.generated.h"

class UStaticEnvironmentNiagaraComponent;

UCLASS()
class STALKER2_API AStaticEnvironmentParticleActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UStaticEnvironmentNiagaraComponent* EnvironmentParticleComponent;
    
public:
    AStaticEnvironmentParticleActor(const FObjectInitializer& ObjectInitializer);

};

