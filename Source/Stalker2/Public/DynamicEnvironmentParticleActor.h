#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DynamicEnvironmentParticleActor.generated.h"

class UDynamicEnvironmentNiagaraComponent;

UCLASS()
class STALKER2_API ADynamicEnvironmentParticleActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UDynamicEnvironmentNiagaraComponent* EnvironmentParticleComponent;
    
public:
    ADynamicEnvironmentParticleActor(const FObjectInitializer& ObjectInitializer);

};

