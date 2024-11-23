#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CooldownZonesController.generated.h"

class ACooldownZone;
class UBoxComponent;

UCLASS()
class STALKER2_API ACooldownZonesController : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, VisibleAnywhere)
    UBoxComponent* ControllerVolume;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<ACooldownZone>> CooldownZones;
    
public:
    ACooldownZonesController(const FObjectInitializer& ObjectInitializer);

};

