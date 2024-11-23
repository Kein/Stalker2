#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SummonStateComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API USummonStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USummonStateComponent(const FObjectInitializer& ObjectInitializer);

};

