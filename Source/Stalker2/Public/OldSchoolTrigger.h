#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/HitResult.h"
#include "OldSchoolTrigger.generated.h"

class ADoorView;
class UBoxComponent;
class UPrimitiveComponent;

UCLASS()
class STALKER2_API AOldSchoolTrigger : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UBoxComponent* Trigger;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DistanceToHinge;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HalfAngleToHinge;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ADoorView* Door;
    
public:
    AOldSchoolTrigger(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnTriggerEndOverlap(const UPrimitiveComponent* OverlappedComponent, const AActor* OtherActor, const UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnTriggerBeginOverlap(const UPrimitiveComponent* Comp, const AActor* OtherActor, const UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult);
    
};

