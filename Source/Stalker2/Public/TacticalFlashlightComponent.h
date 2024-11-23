#pragma once
#include "CoreMinimal.h"
#include "FlashlightComponent.h"
#include "TacticalFlashlightComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UTacticalFlashlightComponent : public UFlashlightComponent {
    GENERATED_BODY()
public:
    UTacticalFlashlightComponent(const FObjectInitializer& ObjectInitializer);

};

