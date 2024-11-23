#pragma once
#include "CoreMinimal.h"
#include "ItemContainerInteractionComponent.h"
#include "AnimatedItemContainerInteractionComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UAnimatedItemContainerInteractionComponent : public UItemContainerInteractionComponent {
    GENERATED_BODY()
public:
    UAnimatedItemContainerInteractionComponent(const FObjectInitializer& ObjectInitializer);

};

