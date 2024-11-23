#pragma once
#include "CoreMinimal.h"
#include "ESmartCoverType.h"
#include "SmartCoverPerCoverTypeData.h"
#include "SmartCoverWeaponTypeData.generated.h"

USTRUCT()
struct FSmartCoverWeaponTypeData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<ESmartCoverType, FSmartCoverPerCoverTypeData> AnimationsData;
    
    STALKER2_API FSmartCoverWeaponTypeData();
};

