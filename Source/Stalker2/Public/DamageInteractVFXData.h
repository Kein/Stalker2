#pragma once
#include "CoreMinimal.h"
#include "DamageInteractVFXData.generated.h"

class UNiagaraComponent;

USTRUCT(BlueprintType)
struct FDamageInteractVFXData {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UNiagaraComponent* InteractDamageVFX;
    
    STALKER2_API FDamageInteractVFXData();
};

