#pragma once
#include "CoreMinimal.h"
#include "LookAtMutantData.generated.h"

USTRUCT(BlueprintType)
struct FLookAtMutantData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    double AimingYaw;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    double AimingPitch;
    
    UPROPERTY(EditAnywhere)
    float MaxRotationAngleYaw;
    
    UPROPERTY(EditAnywhere)
    float MaxRotationAnglePitch;
    
    UPROPERTY(EditAnywhere)
    float RotationSpeed;
    
    STALKER2_API FLookAtMutantData();
};

