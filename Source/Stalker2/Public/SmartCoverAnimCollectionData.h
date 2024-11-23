#pragma once
#include "CoreMinimal.h"
#include "EWeaponType.h"
#include "SmartCoverWeaponTypeData.h"
#include "SmartCoverAnimCollectionData.generated.h"

USTRUCT(BlueprintType)
struct FSmartCoverAnimCollectionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<EWeaponType, FSmartCoverWeaponTypeData> WeaponTypeAnimationsData;
    
    STALKER2_API FSmartCoverAnimCollectionData();
};

