#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TopazScannerVFX.generated.h"

class ATopazScanner;
class UNiagaraComponent;
class UNiagaraSystem;

USTRUCT(BlueprintType)
struct STALKER2_API FTopazScannerVFX {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UNiagaraSystem* NiagaraSystem;
    
    UPROPERTY(EditAnywhere)
    FTransform SpawnTransform;
    
    UPROPERTY(EditAnywhere)
    float EnableTime;
    
    UPROPERTY(EditAnywhere)
    float DisableTime;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UNiagaraComponent> NiagaraComponent;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ATopazScanner> OwnerScanner;
    
public:
    FTopazScannerVFX();
};

