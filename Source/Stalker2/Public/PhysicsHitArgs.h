#pragma once
#include "CoreMinimal.h"
#include "PhysicsHitArgs.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct STALKER2_API FPhysicsHitArgs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    AActor* StimulusActor;
    
    FPhysicsHitArgs();
};

