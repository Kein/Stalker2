#pragma once
#include "CoreMinimal.h"
#include "EMainHandEquipmentType.h"
#include "PrototypeSID.h"
#include "ContextualActionNotifyWeaponEquipData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FContextualActionNotifyWeaponEquipData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FPrototypeSID ItemSID;
    
    UPROPERTY(EditAnywhere)
    EMainHandEquipmentType SlotToEquip;
    
    FContextualActionNotifyWeaponEquipData();
};

