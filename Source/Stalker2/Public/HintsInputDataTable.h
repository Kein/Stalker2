#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Styling/SlateBrush.h"
#include "HintsInputDataTable.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FHintsInputDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush PlatformIcons;
    
    FHintsInputDataTable();
};

