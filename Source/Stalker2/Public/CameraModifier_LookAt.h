#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraModifier.h"
#include "CameraModifier_LookAt.generated.h"

class APlayerController;

UCLASS()
class UCameraModifier_LookAt : public UCameraModifier {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    APlayerController* PlayerController;
    
public:
    UCameraModifier_LookAt();

};

