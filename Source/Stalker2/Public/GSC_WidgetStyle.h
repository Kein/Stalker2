#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "GSC_WidgetStyle.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FGSC_WidgetStyle : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor Colour;
    
    FGSC_WidgetStyle();
};

