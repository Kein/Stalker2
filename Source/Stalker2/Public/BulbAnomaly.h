#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/HitResult.h"
#include "MovieSceneSequencePlaybackSettings.h"
#include "ObjBase.h"
#include "BulbAnomaly.generated.h"

class ALevelSequenceActor;
class UAkAudioEvent;
class UCurveFloat;
class ULevelSequence;
class UMaterialParameterCollection;
class UPrimitiveComponent;
class USphereComponent;
class UVehicleSoundPlacement;

UCLASS()
class STALKER2_API ABulbAnomaly : public AActor, public IObjBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* PullSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* ReleaseSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* IdleSound;
    
private:
    UPROPERTY(Instanced, VisibleAnywhere)
    USphereComponent* SphereComponent;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    TArray<UVehicleSoundPlacement*> VehicleSoundLocations;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* DamageCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* GravityCurve;
    
    UPROPERTY(EditAnywhere)
    ULevelSequence* AnomalySequence;
    
    UPROPERTY(EditAnywhere)
    FMovieSceneSequencePlaybackSettings SequencePlaybackSettings;
    
    UPROPERTY(VisibleAnywhere)
    ALevelSequenceActor* LevelSequenceActor;
    
    UPROPERTY(EditAnywhere)
    UMaterialParameterCollection* EnvironmentMPC;
    
    UPROPERTY(EditAnywhere)
    FName FoliageParameterName;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> InteractionEffectsSIDs;
    
    UPROPERTY(EditAnywhere)
    float EnduranceDamagePerSecond;
    
    UPROPERTY(EditAnywhere)
    float GravityPower;
    
    UPROPERTY(EditAnywhere)
    float GravityFree;
    
    UPROPERTY(EditAnywhere)
    float CoveredMultiplier;
    
    UPROPERTY(EditAnywhere)
    float UncoveredMultiplier;
    
    UPROPERTY(EditAnywhere)
    float CoverTraceDistance;
    
    UPROPERTY(EditAnywhere)
    FName CarsTag;
    
    UPROPERTY(EditAnywhere)
    float Duration;
    
    UPROPERTY(EditAnywhere)
    float Cooldown;
    
public:
    ABulbAnomaly(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult);
    

    // Fix for true pure virtual functions not being implemented
};

