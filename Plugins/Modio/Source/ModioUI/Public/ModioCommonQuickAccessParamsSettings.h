#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ModioCommonQuickAccessParamsSettings.generated.h"

USTRUCT(BlueprintType)
struct MODIOUI_API FModioCommonQuickAccessParamsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditDefaultsOnly)
    FText MainGameMenuButtonLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText MyCollectionButtonLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText LogInButtonLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText LogOutButtonLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FDataTableRowHandle MainGameMenuInputAction;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FDataTableRowHandle AuthInputAction;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FDataTableRowHandle MyCollectionInputAction;
    
    UPROPERTY(Config, EditDefaultsOnly)
    bool bShowMainGameMenu;
    
    FModioCommonQuickAccessParamsSettings();
};

