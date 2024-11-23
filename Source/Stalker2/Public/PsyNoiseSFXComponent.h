#pragma once
#include "CoreMinimal.h"
#include "PlayerEffectsSFXComponent.h"
#include "PsyNoiseSFXComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UPsyNoiseSFXComponent : public UPlayerEffectsSFXComponent {
    GENERATED_BODY()
public:
    UPsyNoiseSFXComponent(const FObjectInitializer& ObjectInitializer);

};

