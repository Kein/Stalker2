#pragma once
#include "CoreMinimal.h"
#include "EInventoryEquipmentSlot.h"
#include "EquipmentNavigationPath.generated.h"

USTRUCT()
struct FEquipmentNavigationPath {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    double MinAngle;
    
    UPROPERTY(EditAnywhere)
    double MaxAngle;
    
    UPROPERTY(EditAnywhere)
    EInventoryEquipmentSlot TargetSlot;
    
    STALKER2_API FEquipmentNavigationPath();
};

