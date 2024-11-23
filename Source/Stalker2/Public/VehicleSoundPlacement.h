#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "VehicleSoundPlacement.generated.h"

class UAkAudioEvent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UVehicleSoundPlacement : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* VehiclePullSound;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* VehicleReleaseSound;
    
public:
    UVehicleSoundPlacement(const FObjectInitializer& ObjectInitializer);

};

