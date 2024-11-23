#pragma once
#include "CoreMinimal.h"
#include "PassiveDetectorComponent.h"
#include "AnomalyDetectorComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UAnomalyDetectorComponent : public UPassiveDetectorComponent {
    GENERATED_BODY()
public:
    UAnomalyDetectorComponent(const FObjectInitializer& ObjectInitializer);

};

