#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AimProcessorComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UAimProcessorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UAimProcessorComponent(const FObjectInitializer& ObjectInitializer);

};

