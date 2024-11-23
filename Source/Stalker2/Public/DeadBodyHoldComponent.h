#pragma once
#include "CoreMinimal.h"
#include "HoldComponent.h"
#include "DeadBodyHoldComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UDeadBodyHoldComponent : public UHoldComponent {
    GENERATED_BODY()
public:
    UDeadBodyHoldComponent(const FObjectInitializer& ObjectInitializer);

};

