#pragma once
#include "CoreMinimal.h"
#include "PassiveDetectorComponent.h"
#include "SearchpointDetectorComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API USearchpointDetectorComponent : public UPassiveDetectorComponent {
    GENERATED_BODY()
public:
    USearchpointDetectorComponent(const FObjectInitializer& ObjectInitializer);

};

