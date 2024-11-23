#pragma once
#include "CoreMinimal.h"
#include "SingleClickComponent.h"
#include "NPCComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UNPCComponent : public USingleClickComponent {
    GENERATED_BODY()
public:
    UNPCComponent(const FObjectInitializer& ObjectInitializer);

};

