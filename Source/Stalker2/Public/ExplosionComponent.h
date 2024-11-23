#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "BusVolumeDataReceiver.h"
#include "PrototypeSID.h"
#include "UID.h"
#include "ExplosionComponent.generated.h"

class UFXSystemAsset;
class UObject;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UExplosionComponent : public UActorComponent, public IBusVolumeDataReceiver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    UFXSystemAsset* ExplosionParticles;
    
private:
    UPROPERTY(EditAnywhere)
    FPrototypeSID PrototypeSID;
    
public:
    UExplosionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ExplodeWithCustomLocation(const FVector Location, const FUID ExplosionInstigatorUID);
    
    UFUNCTION(BlueprintCallable)
    void ExplodeAtCustomLocation(const FVector Location, UObject* ExplosionInstigator);
    
    UFUNCTION(BlueprintCallable)
    void Explode(const FUID ExplosionInstigatorUID);
    

    // Fix for true pure virtual functions not being implemented
};

