#pragma once
#include "CoreMinimal.h"
#include "WetnessComponent.h"
#include "NPCWetnessComponent.generated.h"

class UNiagaraComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UNPCWetnessComponent : public UWetnessComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, Transient)
    UNiagaraComponent* Niagara;
    
    UPROPERTY(EditDefaultsOnly)
    FName SplashSpawnRateParamName;
    
    UPROPERTY(EditDefaultsOnly)
    FName DropSpawnRateParamName;
    
public:
    UNPCWetnessComponent(const FObjectInitializer& ObjectInitializer);

};

