#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Styling/SlateTypes.h"
#include "GSC_WidgetProgressStyle.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FGSC_WidgetProgressStyle : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FProgressBarStyle ProgressBarStyle;
    
    FGSC_WidgetProgressStyle();
};

