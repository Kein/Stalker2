#pragma once
#include "CoreMinimal.h"
#include "GuidActorComponent.h"
#include "UIDActorComponent.generated.h"

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UUIDActorComponent : public UGuidActorComponent {
    GENERATED_BODY()
public:
    UUIDActorComponent(const FObjectInitializer& ObjectInitializer);

};

