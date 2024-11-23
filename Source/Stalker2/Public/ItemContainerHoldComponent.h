#pragma once
#include "CoreMinimal.h"
#include "HoldComponent.h"
#include "ItemContainerHoldComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UItemContainerHoldComponent : public UHoldComponent {
    GENERATED_BODY()
public:
    UItemContainerHoldComponent(const FObjectInitializer& ObjectInitializer);

};

