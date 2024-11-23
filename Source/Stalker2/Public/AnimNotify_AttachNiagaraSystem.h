#pragma once
#include "CoreMinimal.h"
#include "AnimNotify_PlayNiagaraEffect.h"
#include "EParticleAction.h"
#include "AnimNotify_AttachNiagaraSystem.generated.h"

UCLASS(CollapseCategories)
class STALKER2_API UAnimNotify_AttachNiagaraSystem : public UAnimNotify_PlayNiagaraEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EParticleAction AttachAction;
    
    UAnimNotify_AttachNiagaraSystem();

};

