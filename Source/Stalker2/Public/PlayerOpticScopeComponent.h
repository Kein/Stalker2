#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerOpticScopeComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UPlayerOpticScopeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPlayerOpticScopeComponent(const FObjectInitializer& ObjectInitializer);

};

