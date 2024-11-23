#pragma once
#include "CoreMinimal.h"
#include "ERotationPartType.h"
#include "RotationBodyPart.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FRotationBodyPart {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    ERotationPartType BodyType;
    
    UPROPERTY(BlueprintReadOnly)
    float Rotation;
    
    UPROPERTY(BlueprintReadOnly)
    float FinalRotation;
    
    FRotationBodyPart();
};

