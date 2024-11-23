#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StealthKillComponent.generated.h"

class APC;
class UCurveFloat;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UStealthKillComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    APC* OwnerPlayer;
    
    UPROPERTY(Transient)
    UCurveFloat* StealthKillSnapCurve;
    
public:
    UStealthKillComponent(const FObjectInitializer& ObjectInitializer);

};

