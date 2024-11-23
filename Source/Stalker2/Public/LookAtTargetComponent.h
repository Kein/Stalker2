#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "LookAtTargetComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API ULookAtTargetComponent : public USceneComponent {
    GENERATED_BODY()
public:
    ULookAtTargetComponent(const FObjectInitializer& ObjectInitializer);

};

