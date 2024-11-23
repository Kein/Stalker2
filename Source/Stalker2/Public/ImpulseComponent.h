#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "ImpulseComponent.generated.h"

class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UImpulseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UImpulseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ApplyImpulse(const AActor* InTargetActor, const FVector InImpulse, const bool bIgnoreMass);
    
};

