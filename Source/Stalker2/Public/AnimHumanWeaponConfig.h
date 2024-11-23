#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AnimHumanWeaponConfig.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAnimHumanWeaponConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CloseToBodyWeaponMinShift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CloseToBodyWeaponMaxShift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector WeaponIKEffectorOffset;
    
    FAnimHumanWeaponConfig();
};

