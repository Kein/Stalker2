#pragma once
#include "CoreMinimal.h"
#include "BaseManager.h"
#include "GameManager.generated.h"

class ADeveloperSpectator;
class UCurveFloat;

UCLASS()
class STALKER2_API UGameManager : public UBaseManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    ADeveloperSpectator* DeveloperSpectator;
    
    UPROPERTY(Transient)
    UCurveFloat* StaminaWeightCurve;
    
public:
    UGameManager();

};

