#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "Components/SphereComponent.h"
#include "GameplayTagContainer.h"
#include "ForceFeedbackSphereComponent.generated.h"

class AActor;
class UCurveFloat;
class UPrimitiveComponent;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UForceFeedbackSphereComponent : public USphereComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag FeedbackTag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* ForceFeedbackDistanceIntensityCurve;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float UpdateIntensityRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float UpdateStartFeedbackRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bOneShotFeedback;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bDisabledByDefault;
    
public:
    UForceFeedbackSphereComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void EnableForceFeedback();
    
    UFUNCTION(BlueprintCallable)
    void DisableForceFeedback();
    
};

