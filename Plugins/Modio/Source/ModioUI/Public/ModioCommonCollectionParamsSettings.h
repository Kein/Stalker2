#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ModioCommonCollectionParamsSettings.generated.h"

USTRUCT(BlueprintType)
struct MODIOUI_API FModioCommonCollectionParamsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditDefaultsOnly)
    FText ErrorsLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText InstalledModsLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText InstalledModsDescription;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText DefaultFetchUpdateButtonLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText SearchingFetchUpdateButtonLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText OwnedModsLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText FilterButtonLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FDataTableRowHandle CheckForUpdatesInputAction;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FDataTableRowHandle FilterInputAction;
    
    FModioCommonCollectionParamsSettings();
};

