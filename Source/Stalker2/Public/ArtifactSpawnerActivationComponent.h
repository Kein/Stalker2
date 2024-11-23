#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ArtifactSpawnerActivationComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UArtifactSpawnerActivationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UArtifactSpawnerActivationComponent(const FObjectInitializer& ObjectInitializer);

};

