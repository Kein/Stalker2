#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AimAssistComponent.generated.h"

class UCurveFloat;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UAimAssistComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UCurveFloat* SnappingTimeCurve;
    
public:
    UAimAssistComponent(const FObjectInitializer& ObjectInitializer);

};

