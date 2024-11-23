#pragma once
#include "CoreMinimal.h"
#include "EMainHandEquipmentType.h"
#include "CharacterDetectorFailedLandingAnimations.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FCharacterDetectorFailedLandingAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EMainHandEquipmentType, UAnimMontage*> FailedLanding;
    
    STALKER2_API FCharacterDetectorFailedLandingAnimations();
};

