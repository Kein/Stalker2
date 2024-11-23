#pragma once
#include "CoreMinimal.h"
#include "SingleClickComponent.h"
#include "DraggableComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UDraggableComponent : public USingleClickComponent {
    GENERATED_BODY()
public:
    UDraggableComponent(const FObjectInitializer& ObjectInitializer);

};

