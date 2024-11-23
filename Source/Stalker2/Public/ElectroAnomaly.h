#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Anomaly.h"
#include "ElectroAnomalyBakedDataFloat.h"
#include "ElectroAnomaly.generated.h"

class UStaticMeshComponent;

UCLASS()
class STALKER2_API AElectroAnomaly : public AAnomaly {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* RootComponentPtr;
    
    UPROPERTY(Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* CollisionMeshPtr;
    
public:
    AElectroAnomaly(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintPure)
    float GetRadius() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetParticleSpawnLocation() const;
    
public:
    UFUNCTION(BlueprintPure)
    FElectroAnomalyBakedDataFloat GetElectroBakedData() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPSetActiveIdleVFX(const bool bNewActive);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPDoLightningStrikeAfterPauseTime();
    
};

