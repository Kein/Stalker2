#pragma once
#include "CoreMinimal.h"
#include "SingleClickComponent.h"
#include "ArtifactInteractableComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UArtifactInteractableComponent : public USingleClickComponent {
    GENERATED_BODY()
public:
    UArtifactInteractableComponent(const FObjectInitializer& ObjectInitializer);

};

