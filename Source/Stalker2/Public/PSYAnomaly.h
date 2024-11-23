#pragma once
#include "CoreMinimal.h"
#include "Anomaly.h"
#include "PSYAnomaly.generated.h"

class UNiagaraComponent;
class USphereComponent;

UCLASS()
class STALKER2_API APSYAnomaly : public AAnomaly {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USphereComponent* CollisionComponent;
    
    UPROPERTY(Instanced, VisibleDefaultsOnly)
    UNiagaraComponent* PSYParticle;
    
public:
    APSYAnomaly(const FObjectInitializer& ObjectInitializer);

};

