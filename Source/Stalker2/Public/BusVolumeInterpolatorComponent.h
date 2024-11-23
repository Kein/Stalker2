#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BusVolumeInterpolatorComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UBusVolumeInterpolatorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UBusVolumeInterpolatorComponent(const FObjectInitializer& ObjectInitializer);

};

