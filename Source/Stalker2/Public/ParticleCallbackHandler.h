#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NiagaraDataInterfaceExport.h"
#include "ParticleCallbackHandler.generated.h"

UCLASS()
class STALKER2_API UParticleCallbackHandler : public UObject, public INiagaraParticleCallbackHandler {
    GENERATED_BODY()
public:
    UParticleCallbackHandler();


    // Fix for true pure virtual functions not being implemented
};

