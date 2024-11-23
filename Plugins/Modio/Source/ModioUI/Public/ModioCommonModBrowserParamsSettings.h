#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ModioCommonModBrowserParamsSettings.generated.h"

USTRUCT(BlueprintType)
struct MODIOUI_API FModioCommonModBrowserParamsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditDefaultsOnly)
    FText CollectionViewTabText;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText SearchResultsViewTabText;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FDataTableRowHandle PreviousTabInputAction;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FDataTableRowHandle NextTabInputAction;
    
    FModioCommonModBrowserParamsSettings();
};

