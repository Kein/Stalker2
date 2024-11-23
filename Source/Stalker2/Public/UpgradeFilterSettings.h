#pragma once
#include "CoreMinimal.h"
#include "EInventoryEquipmentSlot.h"
#include "UpgradeFilterSettings.generated.h"

USTRUCT(BlueprintType)
struct FUpgradeFilterSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInventoryEquipmentSlot Filter;
    
    STALKER2_API FUpgradeFilterSettings();
};

