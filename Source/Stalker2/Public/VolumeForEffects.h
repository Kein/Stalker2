#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Volume.h"
#include "GuidInterface.h"
#include "ObjBase.h"
#include "OverlapVolumeEffect.h"
#include "VolumeForEffects.generated.h"

class UObject;
class USignalReceiverComponent;

UCLASS()
class STALKER2_API AVolumeForEffects : public AVolume, public IObjBase, public IGuidInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    FGuid Guid;
    
    UPROPERTY(EditAnywhere)
    bool bSpawnDisabled;
    
    UPROPERTY(EditAnywhere)
    TArray<FOverlapVolumeEffect> EffectsToApply;
    
protected:
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    USignalReceiverComponent* ActivateVolumeSignal;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    USignalReceiverComponent* DeactivateVolumeSignal;
    
public:
    AVolumeForEffects(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDisabled(const bool bDisabled);
    
    UFUNCTION()
    void DeactivateDelegateHandle(UObject* DataObject);
    
    UFUNCTION()
    void ActivateDelegateHandle(UObject* DataObject);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    FGuid GetGUID() const override PURE_VIRTUAL(GetGUID, return FGuid{};);
    
};

