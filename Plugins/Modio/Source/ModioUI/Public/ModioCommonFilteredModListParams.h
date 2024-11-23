#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ModioCommonFilteredModListParams.generated.h"

USTRUCT(BlueprintType)
struct MODIOUI_API FModioCommonFilteredModListParams {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditDefaultsOnly)
    FText PreviousPageLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText NextPageLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText CurrentPageTextFormat;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText TotalPagesTextFormat;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText TotalModsTextFormat;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText TotalSingleModTextFormat;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FDataTableRowHandle PreviousPageInputAction;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FDataTableRowHandle NextPageInputAction;
    
    FModioCommonFilteredModListParams();
};

