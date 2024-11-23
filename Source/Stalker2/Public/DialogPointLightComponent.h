#pragma once
#include "CoreMinimal.h"
#include "Components/PointLightComponent.h"
#include "DialogPointLightComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDialogPointLightComponent : public UPointLightComponent {
    GENERATED_BODY()
public:
    UDialogPointLightComponent(const FObjectInitializer& ObjectInitializer);

};

