#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WaterComponent.generated.h"

class AActor;
class UMaterialInterface;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UWaterComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool bAffectedByRain;
    
    UPROPERTY(Transient)
    UMaterialInterface* RegularWaterMaterial;
    
public:
    UWaterComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void OnEndOverlap(AActor* OverlappedComponent, AActor* OtherActor);
    
    UFUNCTION()
    void OnBeginOverlap(AActor* OverlappedComponent, AActor* OtherActor);
    
};

