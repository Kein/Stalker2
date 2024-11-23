#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NiagaraParameterProvider.generated.h"

class UNiagaraComponent;

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UNiagaraParameterProvider : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    TSet<UNiagaraComponent*> ValueReceivers;
    
public:
    UNiagaraParameterProvider(const FObjectInitializer& ObjectInitializer);

};

