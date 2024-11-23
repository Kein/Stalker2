#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ModioCommonReportParamsSettings.generated.h"

USTRUCT(BlueprintType)
struct MODIOUI_API FModioCommonReportParamsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditDefaultsOnly)
    FDataTableRowHandle ProceedInputAction;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FDataTableRowHandle BackInputAction;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FDataTableRowHandle SubmitInputAction;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FDataTableRowHandle CancelInputAction;
    
    FModioCommonReportParamsSettings();
};

