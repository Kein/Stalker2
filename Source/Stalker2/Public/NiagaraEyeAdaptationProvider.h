#pragma once
#include "CoreMinimal.h"
#include "NiagaraParameterProvider.h"
#include "NiagaraEyeAdaptationProvider.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UNiagaraEyeAdaptationProvider : public UNiagaraParameterProvider {
    GENERATED_BODY()
public:
    UNiagaraEyeAdaptationProvider(const FObjectInitializer& ObjectInitializer);

};

