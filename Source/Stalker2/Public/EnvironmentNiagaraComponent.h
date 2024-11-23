#pragma once
#include "CoreMinimal.h"
#include "NiagaraComponent.h"
#include "EnvironmentNiagaraComponent.generated.h"

UCLASS(Abstract, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEnvironmentNiagaraComponent : public UNiagaraComponent {
    GENERATED_BODY()
public:
    UEnvironmentNiagaraComponent(const FObjectInitializer& ObjectInitializer);

};

