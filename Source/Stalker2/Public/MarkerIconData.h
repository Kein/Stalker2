#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EMarkerState.h"
#include "MarkerStateIconsData.h"
#include "MarkerIconData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FMarkerIconData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EMarkerState, FMarkerStateIconsData> MarkerStateIcons;
    
    FMarkerIconData();
};

