#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GuidInterface.h"
#include "PrototypeSID.h"
#include "UIDActor_Bed.h"
#include "BedView.generated.h"

class UBedHoldComponent;
class UStaticMeshComponent;

UCLASS()
class STALKER2_API ABedView : public AUIDActor_Bed, public IGuidInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FGuid Guid;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UBedHoldComponent* SleepComponent;
    
private:
    UPROPERTY(EditAnywhere)
    FPrototypeSID HappyHoursSID;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UStaticMeshComponent* BedMeshComponent;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIgnoreSleepinessValue;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIgnoreEmission;
    
public:
    ABedView(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSleepStarted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSleepEnded();
    
public:
    UFUNCTION()
    void Interact();
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    FGuid GetGUID() const override PURE_VIRTUAL(GetGUID, return FGuid{};);
    
};

