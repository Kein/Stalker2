#pragma once
#include "CoreMinimal.h"
#include "UIDActorComponent.h"
#include "ContextualActionComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UContextualActionComponent : public UUIDActorComponent {
    GENERATED_BODY()
public:
    UContextualActionComponent(const FObjectInitializer& ObjectInitializer);

};

