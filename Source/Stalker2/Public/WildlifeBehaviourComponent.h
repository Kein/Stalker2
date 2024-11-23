#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WildlifeBehaviourComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UWildlifeBehaviourComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UWildlifeBehaviourComponent(const FObjectInitializer& ObjectInitializer);

};

