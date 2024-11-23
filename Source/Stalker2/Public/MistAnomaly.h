#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "EffectPrototypeSID.h"
#include "UIDActor_MistAnomaly.h"
#include "MistAnomaly.generated.h"

class AActor;
class UCapsuleComponent;
class UPrimitiveComponent;

UCLASS()
class STALKER2_API AMistAnomaly : public AUIDActor_MistAnomaly {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FEffectPrototypeSID> PlayerEffectSIDs;
    
    UPROPERTY(EditAnywhere)
    float WeatherSpeedFactor;
    
    UPROPERTY(VisibleAnywhere)
    FGuid Guid;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UCapsuleComponent* CapsuleComponent;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UCapsuleComponent* SaveCapsuleComponent;
    
public:
    AMistAnomaly(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTeleportationEnabled(const bool InbTeleportationEnabled);
    
private:
    UFUNCTION()
    void OnSaveBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerTeleport();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerExit();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerEnter();
    
private:
    UFUNCTION()
    void OnAnomalyEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnAnomalyBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult);
    
};

