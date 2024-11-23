#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AnimPlayerWeaponSwingData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAnimPlayerWeaponSwingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FRotator ItemTotalRotation;
    
    UPROPERTY(BlueprintReadOnly)
    FVector ItemTotalShift;
    
    UPROPERTY(BlueprintReadOnly)
    FVector ItemSocketTotalShift;
    
    FAnimPlayerWeaponSwingData();
};

