#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "BaseVolumeComponent.h"
#include "PsyVolumeComponent.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPsyVolumeComponent : public UBaseVolumeComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FString> PsyEffectPrototypeSIDs;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> EndOverlapPsyEffectPrototypeSIDs;
    
    UPROPERTY(EditAnywhere)
    float PsyTimerMin;
    
    UPROPERTY(EditAnywhere)
    float PsyTimerMax;
    
public:
    UPsyVolumeComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

