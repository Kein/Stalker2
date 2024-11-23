#pragma once
#include "CoreMinimal.h"
#include "NiagaraParameterProvider.h"
#include "NiagaraWindIntensityDirectionProvider.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UNiagaraWindIntensityDirectionProvider : public UNiagaraParameterProvider {
    GENERATED_BODY()
public:
    UNiagaraWindIntensityDirectionProvider(const FObjectInitializer& ObjectInitializer);

};

