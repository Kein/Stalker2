#pragma once
#include "CoreMinimal.h"
#include "EnvironmentNiagaraComponent.h"
#include "DynamicEnvironmentNiagaraComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UDynamicEnvironmentNiagaraComponent : public UEnvironmentNiagaraComponent {
    GENERATED_BODY()
public:
    UDynamicEnvironmentNiagaraComponent(const FObjectInitializer& ObjectInitializer);

};

