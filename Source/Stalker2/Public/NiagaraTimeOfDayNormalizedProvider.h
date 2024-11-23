#pragma once
#include "CoreMinimal.h"
#include "NiagaraParameterProvider.h"
#include "NiagaraTimeOfDayNormalizedProvider.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UNiagaraTimeOfDayNormalizedProvider : public UNiagaraParameterProvider {
    GENERATED_BODY()
public:
    UNiagaraTimeOfDayNormalizedProvider(const FObjectInitializer& ObjectInitializer);

};

