#pragma once
#include "CoreMinimal.h"
#include "ESpawnNiagaraAtLocation.h"
#include "SpawnNiagaraSystemAtLocation.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct STALKER2_API FSpawnNiagaraSystemAtLocation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName AttachmentName;
    
    UPROPERTY(EditAnywhere)
    ESpawnNiagaraAtLocation SpawnNiagaraAtLocation;
    
    UPROPERTY(EditAnywhere)
    UNiagaraSystem* NiagaraAsset;
    
    FSpawnNiagaraSystemAtLocation();
};

