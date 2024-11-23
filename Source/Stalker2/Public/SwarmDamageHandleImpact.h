#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SwarmDamageHandleImpact.generated.h"

class AActor;
class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FSwarmDamageHandleImpact {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bSpawnCorpseOnDestroy;
    
    UPROPERTY(EditAnywhere)
    bool bApplyImpulseToCorpse;
    
    UPROPERTY(EditAnywhere)
    bool bAttachImpactEffectToCorpse;
    
    UPROPERTY(EditAnywhere)
    bool bSetMaterialParametersToCorpse;
    
    UPROPERTY(EditAnywhere)
    float ImpulseScale;
    
    UPROPERTY(EditAnywhere)
    float AngularImpulseScale;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> SpawnCorpseTemplate;
    
    UPROPERTY(EditAnywhere)
    UNiagaraSystem* ImpactEffect;
    
    UPROPERTY(EditAnywhere)
    UNiagaraSystem* EnvironmentEffect;
    
    STALKER2_API FSwarmDamageHandleImpact();
};

