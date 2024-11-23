#pragma once
#include "CoreMinimal.h"
#include "PlayerEffectsSFXComponent.h"
#include "GeigerCounterComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UGeigerCounterComponent : public UPlayerEffectsSFXComponent {
    GENERATED_BODY()
public:
    UGeigerCounterComponent(const FObjectInitializer& ObjectInitializer);

};

