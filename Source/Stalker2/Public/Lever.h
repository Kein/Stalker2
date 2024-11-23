#pragma once
#include "CoreMinimal.h"
#include "LockableComponent.h"
#include "Lever.generated.h"

class UCurveFloat;
class UStaticMeshComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API ULever : public ULockableComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    float CurrentValue;
    
    UPROPERTY(EditAnywhere)
    bool bShouldConsumeItemOnOpen;
    
    UPROPERTY(EditAnywhere)
    bool bUseInBothSides;
    
    UPROPERTY(EditAnywhere, Instanced)
    UStaticMeshComponent* LeverHandleMesh;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* LeverCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* LeverCurveReverse;
    
public:
    ULever(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void ChangeLeverPosition();
    
};

