#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ModioCommonSearchParamsSettings.generated.h"

USTRUCT(BlueprintType)
struct MODIOUI_API FModioCommonSearchParamsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditDefaultsOnly)
    FText SearchTabTitle;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText SearchButtonLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText ResetButtonLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText CloseButtonLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText KeywordsLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText CategoriesLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText EditSearchButtonLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText ShowingAllModsLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FDataTableRowHandle CloseInputAction;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FDataTableRowHandle SearchInputAction;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FDataTableRowHandle ResetInputAction;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FDataTableRowHandle EditSearchInputAction;
    
    FModioCommonSearchParamsSettings();
};

