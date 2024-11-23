#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Styling/SlateBrush.h"
#include "EGSCInputDeviceType.h"
#include "HintsData.h"
#include "HintsDataTable.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FHintsDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCheckPlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EGSCInputDeviceType, FSlateBrush> PlatformIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EGSCInputDeviceType, FHintsData> PlatformData;
    
    FHintsDataTable();
};

