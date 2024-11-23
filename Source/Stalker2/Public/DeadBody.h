#pragma once
#include "CoreMinimal.h"
#include "SingleClickComponent.h"
#include "DeadBody.generated.h"

class AObj;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UDeadBody : public USingleClickComponent {
    GENERATED_BODY()
public:
    UDeadBody(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    AObj* GetInteractedActor();
    
};

