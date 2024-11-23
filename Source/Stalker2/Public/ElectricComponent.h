#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnEndEMIEventDelegate.h"
#include "OnStartEMIEventDelegate.h"
#include "ElectricComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UElectricComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable)
    FOnStartEMIEvent OnStartEMIEvent;
    
    UPROPERTY(BlueprintAssignable)
    FOnEndEMIEvent OnEndEMIEvent;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsTurnedOn;
    
public:
    UElectricComponent(const FObjectInitializer& ObjectInitializer);

};

