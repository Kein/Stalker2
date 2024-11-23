#pragma once
#include "CoreMinimal.h"
#include "EPhysicalMaterialType.h"
#include "LightningStrikeVFXMaterialPrototype.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct STALKER2_API FLightningStrikeVFXMaterialPrototype {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UNiagaraSystem> NiagaraSystem;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<EPhysicalMaterialType> PhysicalMaterialTypes;
    
    FLightningStrikeVFXMaterialPrototype();
};

