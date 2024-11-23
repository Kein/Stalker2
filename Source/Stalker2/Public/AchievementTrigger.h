#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/HitResult.h"
#include "AchievementTrigger.generated.h"

class UBoxComponent;
class UPrimitiveComponent;

UCLASS()
class STALKER2_API AAchievementTrigger : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, VisibleAnywhere)
    UBoxComponent* TriggerArea;
    
    UPROPERTY(EditInstanceOnly)
    FString AchievementSID;
    
    AAchievementTrigger(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

