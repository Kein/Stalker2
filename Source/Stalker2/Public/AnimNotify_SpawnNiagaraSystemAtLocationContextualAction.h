#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "SpawnNiagaraSystemAtLocation.h"
#include "AnimNotify_SpawnNiagaraSystemAtLocationContextualAction.generated.h"

UCLASS(CollapseCategories)
class UAnimNotify_SpawnNiagaraSystemAtLocationContextualAction : public UAnimNotifyBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FSpawnNiagaraSystemAtLocation SpawnNiagaraSystemAtLocation;
    
public:
    UAnimNotify_SpawnNiagaraSystemAtLocationContextualAction();

};

