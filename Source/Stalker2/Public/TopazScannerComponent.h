#pragma once
#include "CoreMinimal.h"
#include "ETopazScannerState.h"
#include "GuidActorComponent.h"
#include "OnTopazStateChangedDelegate.h"
#include "SaveableComponent.h"
#include "TopazScannerComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UTopazScannerComponent : public UGuidActorComponent, public ISaveableComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnTopazStateChanged OnTopazStateChanged;
    
private:
    UPROPERTY(EditAnywhere)
    ETopazScannerState InitialState;
    
    UPROPERTY(EditAnywhere)
    float ScanningTime;
    
public:
    UTopazScannerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    float GetStateStartTimestamp() const;
    
    UFUNCTION(BlueprintPure)
    ETopazScannerState GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeState();
    

    // Fix for true pure virtual functions not being implemented
};

