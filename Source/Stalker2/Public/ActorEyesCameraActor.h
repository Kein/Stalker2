#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "ActorEyesCameraActor.generated.h"

UCLASS()
class STALKER2_API AActorEyesCameraActor : public ACameraActor {
    GENERATED_BODY()
public:
    AActorEyesCameraActor(const FObjectInitializer& ObjectInitializer);

};

