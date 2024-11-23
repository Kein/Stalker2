#pragma once
#include "CoreMinimal.h"
#include "NiagaraParameterProvider.h"
#include "NiagaraPlayerLocationProvider.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UNiagaraPlayerLocationProvider : public UNiagaraParameterProvider {
    GENERATED_BODY()
public:
    UNiagaraPlayerLocationProvider(const FObjectInitializer& ObjectInitializer);

};

