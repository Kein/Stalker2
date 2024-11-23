#pragma once
#include "CoreMinimal.h"
#include "PhysicsControlData.h"
// FIXME
// #include "PhysicsControlNames.h"
#include "AnimPhysicSpaceControl.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAnimPhysicSpaceControl {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPhysicsControlData Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPhysicsControlSettings Settings;

    // FIXME
    //UPROPERTY(BlueprintReadOnly)
    //TMap<FName, FPhysicsControlNames> LimbControls;
    
    //UPROPERTY(BlueprintReadOnly)
    //FPhysicsControlNames AllControls;
    
    FAnimPhysicSpaceControl();
};

