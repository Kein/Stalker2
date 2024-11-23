#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ModioCommonUserProfileWidgetParamsSettings.generated.h"

USTRUCT(BlueprintType)
struct MODIOUI_API FModioCommonUserProfileWidgetParamsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditDefaultsOnly)
    FText ProfileButtonLabel;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FDataTableRowHandle ProfileInputAction;
    
    FModioCommonUserProfileWidgetParamsSettings();
};

