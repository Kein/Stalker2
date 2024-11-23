#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/HitResult.h"
#include "CustomDamageHandleComponent.h"
#include "PsyPhantomComponent.generated.h"

class AActor;
class UAkAudioEvent;
class UAkRtpc;
class UFXSystemAsset;
class UFXSystemComponent;
class UMaterialInstanceDynamic;
class UPrimitiveComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UPsyPhantomComponent : public UActorComponent, public ICustomDamageHandleComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float SecondsToAppear;
    
    UPROPERTY(EditAnywhere)
    float SecondsToDisappear;
    
    UPROPERTY(EditAnywhere)
    float PhatnomHeightChangeSpeedPerSecond;
    
    UPROPERTY(EditAnywhere)
    FName MaterialAlphaParameterName;
    
    UPROPERTY(EditAnywhere)
    FName VFXAlphaParameterName;
    
    UPROPERTY(EditAnywhere)
    UFXSystemAsset* ParticleOnSpawn;
    
    UPROPERTY(EditAnywhere)
    UFXSystemAsset* PhantomHitVFX;
    
    UPROPERTY(EditAnywhere)
    UFXSystemAsset* ParticleOnDeath;
    
    UPROPERTY(EditAnywhere)
    UFXSystemAsset* TrailsParticle;
    
    UPROPERTY(EditAnywhere)
    FVector TrailsParticleScale;
    
    UPROPERTY(EditAnywhere)
    UAkRtpc* RTPC;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* SpawnSound;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* DeathSound;
    
    UPROPERTY(EditAnywhere)
    bool bUseDissolveMaterials;
    
private:
    UPROPERTY()
    float SpawnTimestamp;
    
    UPROPERTY()
    float DeathTimestamp;
    
    UPROPERTY(Instanced)
    UFXSystemComponent* TrailsFX;
    
    UPROPERTY(Transient)
    TArray<UMaterialInstanceDynamic*> DynamicMaterials;
    
public:
    UPsyPhantomComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult);
    

    // Fix for true pure virtual functions not being implemented
};

