#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PsyNPCComponent.generated.h"

class UCurveFloat;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UPsyNPCComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UCurveFloat* DissolveCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* GroomCurve;
    
    UPROPERTY(EditAnywhere)
    float DissolveTime;
    
public:
    UPsyNPCComponent(const FObjectInitializer& ObjectInitializer);

};

