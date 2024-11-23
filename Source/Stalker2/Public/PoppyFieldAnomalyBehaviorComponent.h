#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "Components/SceneComponent.h"
#include "EffectPrototypeSID.h"
#include "PrototypeSID.h"
#include "PoppyFieldAnomalyBehaviorComponent.generated.h"

class AActor;
class UAkAudioEvent;
class UAkRtpc;
class UFlowerParticleComponent;
class UPrimitiveComponent;
class UShapeComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UPoppyFieldAnomalyBehaviorComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPrototypeSID InsideSleepinessEffectSID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPrototypeSID OutsideSleepinessEffectSID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPrototypeSID CriticalSleepinessEffectSID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FEffectPrototypeSID> FallAsleepEffectSIDs;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FTransform> TeleportPoints;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<float> SleepThresholds;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SleepTeleportMinDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SleepDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> FlowerSoundEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> AmbientSoundEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> SleepinessSoundEventPlay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> SleepinessSoundEventStop;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> EyelidsMovementSoundEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> BlinkSoundEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UAkRtpc> BlinkParameter;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPrototypeSID BlinkValueProviderSID;
    
private:
    UPROPERTY(Instanced, SaveGame)
    TArray<UShapeComponent*> Collisions;
    
    UPROPERTY(Instanced, SaveGame)
    TArray<UFlowerParticleComponent*> FlowerParticleComponents;
    
public:
    UPoppyFieldAnomalyBehaviorComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnEndOverlapFlowers(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnBeginOverlapFlowers(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION()
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

