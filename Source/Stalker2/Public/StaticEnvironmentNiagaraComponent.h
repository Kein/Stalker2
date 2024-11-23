#pragma once
#include "CoreMinimal.h"
#include "EStaticParticleType.h"
#include "EnvironmentNiagaraComponent.h"
#include "StaticEnvironmentNiagaraComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UStaticEnvironmentNiagaraComponent : public UEnvironmentNiagaraComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName PrototypeName;
    
    UPROPERTY()
    EStaticParticleType ParticleType;
    
public:
    UStaticEnvironmentNiagaraComponent(const FObjectInitializer& ObjectInitializer);

};

