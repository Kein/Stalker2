#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LightningBallNavigationComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API ULightningBallNavigationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    ULightningBallNavigationComponent(const FObjectInitializer& ObjectInitializer);

};

