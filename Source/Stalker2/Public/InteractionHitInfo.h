#pragma once
#include "CoreMinimal.h"
#include "InteractionHitInfo.generated.h"

class AActor;
class UInteractionComponent;
class UPrimitiveComponent;

USTRUCT()
struct FInteractionHitInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* HitActor;
    
    UPROPERTY(Instanced)
    UPrimitiveComponent* HitComponent;
    
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UInteractionComponent>> Interactions;
    
    STALKER2_API FInteractionHitInfo();
};

