#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerInteractionComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UPlayerInteractionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPlayerInteractionComponent(const FObjectInitializer& ObjectInitializer);

};

