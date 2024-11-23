#pragma once
#include "CoreMinimal.h"
#include "HoldComponent.h"
#include "BedHoldComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UBedHoldComponent : public UHoldComponent {
    GENERATED_BODY()
public:
    UBedHoldComponent(const FObjectInitializer& ObjectInitializer);

};

