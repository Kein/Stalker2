#pragma once
#include "CoreMinimal.h"
#include "Agent.h"
#include "Bloodsucker.generated.h"

class UNiagaraComponent;

UCLASS()
class STALKER2_API ABloodsucker : public AAgent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly, Instanced)
    UNiagaraComponent* InvisibilityTransferParticles;
    
public:
    ABloodsucker(const FObjectInitializer& ObjectInitializer);

};

