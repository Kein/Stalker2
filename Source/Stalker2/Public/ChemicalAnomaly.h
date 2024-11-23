#pragma once
#include "CoreMinimal.h"
#include "Anomaly.h"
#include "HitReceiver.h"
#include "ChemicalAnomaly.generated.h"

class UFXSystemAsset;
class UStaticMeshComponent;

UCLASS()
class STALKER2_API AChemicalAnomaly : public AAnomaly, public IHitReceiver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* CollisionMeshPtr;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFXSystemAsset* SplashImpact;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFXSystemAsset* GrenadeExplosion;
    
public:
    AChemicalAnomaly(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnDecalSpawn();
    

    // Fix for true pure virtual functions not being implemented
};

