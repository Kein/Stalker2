#pragma once
#include "CoreMinimal.h"
#include "HoldComponent.h"
#include "WoundedHoldComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWoundedHoldComponent : public UHoldComponent {
    GENERATED_BODY()
public:
    UWoundedHoldComponent(const FObjectInitializer& ObjectInitializer);

};

