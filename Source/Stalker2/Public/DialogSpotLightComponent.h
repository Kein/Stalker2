#pragma once
#include "CoreMinimal.h"
#include "Components/SpotLightComponent.h"
#include "DialogSpotLightComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDialogSpotLightComponent : public USpotLightComponent {
    GENERATED_BODY()
public:
    UDialogSpotLightComponent(const FObjectInitializer& ObjectInitializer);

};

