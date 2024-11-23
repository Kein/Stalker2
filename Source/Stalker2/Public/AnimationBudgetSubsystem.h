#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "AnimationBudgetSubsystem.generated.h"

class UCurveFloat;

UCLASS()
class UAnimationBudgetSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UCurveFloat* SignificanceMultiplierCurve;
    
    UPROPERTY()
    UCurveFloat* ScreenDistanceToCenterMultiplierCurve;
    
public:
    UAnimationBudgetSubsystem();

};

