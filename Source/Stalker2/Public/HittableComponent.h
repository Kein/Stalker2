#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HittableComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UHittableComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bCanHitWater;
    
    UHittableComponent(const FObjectInitializer& ObjectInitializer);

};

