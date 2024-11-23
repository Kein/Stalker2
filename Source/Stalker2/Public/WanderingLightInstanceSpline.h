#pragma once
#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "WanderingLightInstanceSpline.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UWanderingLightInstanceSpline : public USplineComponent {
    GENERATED_BODY()
public:
    UWanderingLightInstanceSpline(const FObjectInitializer& ObjectInitializer);

};

