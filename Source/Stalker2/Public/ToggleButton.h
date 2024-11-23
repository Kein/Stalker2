#pragma once
#include "CoreMinimal.h"
#include "LockableComponent.h"
#include "ToggleButton.generated.h"

class UCurveFloat;
class UStaticMeshComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UToggleButton : public ULockableComponent {
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
    UStaticMeshComponent* ToggleButtonHandleMesh;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* ToggleButtonCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* ToggleButtonCurveReverse;
    
public:
    UToggleButton(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void ChangeToggleButtonPosition();
    
};

